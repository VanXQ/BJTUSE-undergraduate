#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include "huffmantree.h"
int compress(HuffNode huf_tree[], int n, long flength, char *ifname, char *ofname)
{
    FILE * inFile = fopen(ifname, "rb");
    FILE * outFile = fopen(ofname, "wb");

    unsigned char temp = '\0';

    char buffer[256] = "\0";

    char tou[20];
    int z = 0;
    int strLen = strlen(ifname);
    for (int g = strLen - 1; g>0; g--)
    {
        if (ifname[g] == '.')
        {
            for (int k = g; k< strLen; k++)
            {
                z++;
                tou[z] = ifname[k];

            }
        }
    }

    tou[0] = z + '0';//获取文件后缀名长度(转成字符)
    fwrite((char *)&tou, sizeof(char), z + 1, outFile);//存文件头部
    fwrite(&flength, sizeof(long), 1, outFile);//存总长度
    fwrite(&n, sizeof(int), 1, outFile);//存字符的种类

    for (int i = 0; i < n; i++) {//存每个编号对应的字符,权重
        fwrite(&huf_tree[i].ch, sizeof(unsigned char), 1, outFile);
        fwrite(&huf_tree[i].weight, sizeof(long), 1, outFile);
    }


    while (fread(&temp, sizeof(unsigned char), 1, inFile))
    {
        for (int i = 0; i <n; i++)
        {
            if (temp == huf_tree[i].ch)
            {
                for (int f = 0; huf_tree[i].bits[f] == '0' || huf_tree[i].bits[f] == '1'; f++)
                {
                    strncat(buffer, &huf_tree[i].bits[f], 1);
                }
            }

        }
        while (strlen(buffer) >= 8)
        {
            temp = 0;
            for (int i = 0; i < 8; i++)
            {
                temp = temp << 1;
                if (buffer[i] == '1')
                {
                    temp = temp | 0x01;
                }
            }
            fwrite(&temp, sizeof(unsigned char), 1, outFile);
            strcpy(buffer, buffer + 8);
        }
    }
    int m = strlen(buffer);
    if (m) {
        temp = 0;
        for (int i = 0; i < m; i++)
        {
            temp = temp << 1;
            if (buffer[i] == '1')
            {
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
int extract(HuffNode huf_tree[],  char *ifname, char *ofname)
{
    int i;
    char huozui;                          //文件后缀长度
    char tou[20];                         //文件后缀字符
    long flength;                         //文件总长度
    int n;                               //字符种类
    int node_num;                        //结点总数
    unsigned long writen_len = 0;		// 控制文件写入长度
    FILE *infile, *outfile;
    unsigned char code_temp;		// 暂存8bits编码
    unsigned int root;		// 保存根节点索引，供匹配编码使用

    infile = fopen(ifname, "rb");
    // 判断输入文件是否存在
    if (infile == NULL)
        return -1;

    //读取文件后缀名长度
    fread(&huozui, sizeof(char),1,infile);
    //字符转数字
    int huozui_du = huozui - '0';
    //读取文件后缀字符
    fread(&tou, sizeof(char), huozui_du, infile);
    fread(&flength, sizeof(long), 1, infile);
    fread(&n, sizeof(int), 1, infile);

    node_num = 2 * n - 1;
    for (int a = 0; a < 512; a++)
    {
        huf_tree[a].parent = -1;
        huf_tree[a].ch = NULL;
        huf_tree[a].weight = -1;
        huf_tree[a].lchild = -1;
        huf_tree[a].rchild = -1;
    }

    for (i = 0; i < n; i++)
    {
        fread((char *)&huf_tree[i].ch, sizeof(unsigned char), 1, infile);
        fread((char *)&huf_tree[i].weight, sizeof(long), 1, infile);
    }

    CreateHuffmanTree(huf_tree, n);
    HuffmanCoding(huf_tree, n);
    strncat(ofname, tou, huozui_du);

    outfile = fopen(ofname, "wb");
    root = node_num - 1;
    while (1)
    {
        fread(&code_temp, sizeof(unsigned char), 1, infile);
        for (i = 0; i < 8; i++)
        {
            if (code_temp & 128)
                root = huf_tree[root].rchild;
            else
                root = huf_tree[root].lchild;

            if (root < n)
            {
                fwrite(&huf_tree[root].ch, sizeof(unsigned char), 1, outfile);
                writen_len++;//已编译字符加一
                if (writen_len == flength) break;
                root = node_num - 1;
            }
            code_temp <<= 1;
        }
        if (writen_len == flength) break;
    }

    fclose(infile);
    fclose(outfile);
    return 1;
}//extract()
