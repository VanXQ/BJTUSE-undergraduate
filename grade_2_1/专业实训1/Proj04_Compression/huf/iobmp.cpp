#include <iostream>
#include <cstdio>
#include "huffmantree.h"

int compress(HuffNode Huffman_tree[], int n, long file_length, char *in_file_name, char *out_file_name) {
    FILE *inFile = fopen(in_file_name, "rb");
    FILE *outFile = fopen(out_file_name, "wb");

    unsigned char temp = '\0';

    char buffer[256] = "\0";

    unsigned char suffix[20];
    unsigned int z = 0;
    unsigned int strLen = strlen(in_file_name);
    for (unsigned int g = strLen - 1; g > 0; g--) {
        if (in_file_name[g] == '.') {
            for (unsigned int k = g; k < strLen; k++) {
                z++;
                suffix[z] = in_file_name[k];

            }
        }
    }

    suffix[0] = z + '0';//获取文件后缀名长度(转成字符)
    fwrite((char *) &suffix, sizeof(char), z + 1, outFile);//存文件头部
    fwrite(&file_length, sizeof(long), 1, outFile);//存总长度
    fwrite(&n, sizeof(int), 1, outFile);//存字符的种类

    for (int i = 0; i < n; i++) {//存每个编号对应的字符,权重
        fwrite(&Huffman_tree[i].ch, sizeof(unsigned char), 1, outFile);
        fwrite(&Huffman_tree[i].weight, sizeof(long), 1, outFile);
    }


    while (fread(&temp, sizeof(unsigned char), 1, inFile)) {
        for (int i = 0; i < n; i++) {
            if (temp == Huffman_tree[i].ch) {
                for (int f = 0; Huffman_tree[i].bits[f] == '0' || Huffman_tree[i].bits[f] == '1'; f++) {
                    strncat(buffer, &Huffman_tree[i].bits[f], 1);
                }
            }

        }
        while (strlen(buffer) >= 8) {
            temp = 0;
            for (int i = 0; i < 8; i++) {
                temp = temp << 1;
                if (buffer[i] == '1') {
                    temp = temp | 0x01;
                }
            }
            fwrite(&temp, sizeof(unsigned char), 1, outFile);
            strcpy(buffer, buffer + 8);
        }
    }
    unsigned int m = strlen(buffer);
    if (m) {
        temp = 0;
        for (int i = 0; i < m; i++) {
            temp = temp << 1;
            if (buffer[i] == '1') {
                temp = temp | 0x01;
            }

        }
        temp <<= 8 - m;
        fwrite(&temp, sizeof(unsigned char), 1, outFile);
    }

    fclose(inFile);
    fclose(outFile);
    return 1;
}//compress
int extract(HuffNode Huffman_tree[], char *in_file_name, char *out_file_name) {
    int i;
    char suffix_length;                          //文件后缀长度
    char suffix[20];                         //文件后缀字符
    long file_length;                         //文件总长度
    int n;                               //字符种类
    int node_num;                        //结点总数
    unsigned long writen_len = 0;        // 控制文件写入长度
    FILE *infile, *outfile;
    unsigned char code_temp;        // 暂存8bits编码
    unsigned int root;        // 保存根节点索引，供匹配编码使用

    infile = fopen(in_file_name, "rb");
    // 判断输入文件是否存在
    if (infile == nullptr)
        return -1;

    //读取文件后缀名长度
    fread(&suffix_length, sizeof(char), 1, infile);
    //字符转数字
    int read_suffix = suffix_length - '0';
    //读取文件后缀字符
    fread(&suffix, sizeof(char), read_suffix, infile);
    fread(&file_length, sizeof(long), 1, infile);
    fread(&n, sizeof(int), 1, infile);

    node_num = 2 * n - 1;
    for (int a = 0; a < 512; a++) {
        Huffman_tree[a].parent = -1;
        Huffman_tree[a].ch = '\0';
        Huffman_tree[a].weight = -1;
        Huffman_tree[a].left_child = -1;
        Huffman_tree[a].right_child = -1;
    }

    for (i = 0; i < n; i++) {
        fread((char *) &Huffman_tree[i].ch, sizeof(unsigned char), 1, infile);
        fread((char *) &Huffman_tree[i].weight, sizeof(long), 1, infile);
    }

    CreateHuffmanTree(Huffman_tree, n);
    HuffmanCoding(Huffman_tree, n);
    strncat(out_file_name, suffix, read_suffix);

    outfile = fopen(out_file_name, "wb");
    root = node_num - 1;
    while (true) {
        fread(&code_temp, sizeof(unsigned char), 1, infile);
        for (i = 0; i < 8; i++) {
            if (code_temp & 128)
                root = Huffman_tree[root].right_child;
            else
                root = Huffman_tree[root].left_child;

            if (root < n) {
                fwrite(&Huffman_tree[root].ch, sizeof(unsigned char), 1, outfile);
                writen_len++;//已编译字符加一
                if (writen_len == file_length) break;
                root = node_num - 1;
            }
            code_temp <<= 1;
        }
        if (writen_len == file_length) break;
    }

    fclose(infile);
    fclose(outfile);
    return 1;
}


