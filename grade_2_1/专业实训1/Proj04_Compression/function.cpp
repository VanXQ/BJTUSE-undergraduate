//
// Created by Van_XQ on 2021/11/18.
//

#include <cstring>
#include "cstdio"
#include "include/function.h"

int read_File(Huffman_Node HuffmanTree[], string In_File) {
    std::fstream infile;
    unsigned char ch;
    file_Struct z[256] = {0};
    //对储存256位位图的字符数组的序号进行初始化
    for (int i = 0; i < 256; i++) {
        z[i].pre_Number = i;
    }
    infile.open(In_File);//打开文件
    //如果打不开文件，给出应有提示
    if (!infile) {
        cout << "文件打开失败，请检查后重试" << endl;
    }
    //开始逐字符读入文件信息
    while (infile.get((char &) ch)) {
        for (int i = 0; i < 256; i++) {
            if (ch == i)
                z[i].sum++;
        }
    }
    //利用冒泡排序对频度进行从小到大排序
    for (int i = 0; i < 256; i++) {
        for (int j = i + 1; j < 255; j++) {
            if (z[j].sum <= z[i].sum) {
                int temp_1 = z[j].sum;
                z[j].sum = z[i].sum;
                z[i].sum = temp_1;

                int temp_2 = z[j].sum;
                z[j].sum = z[i].sum;
                z[i].sum = temp_2;
            }

        }

    }
    for (auto &i: z) {
        for (int j = 0; j < 255; j++) {
            //给序号排序
            if (z[j].sum <= i.sum) {
                int temp = z[j].pre_Number;
                z[j].pre_Number = i.pre_Number;
                i.pre_Number = temp;

            }

        }

    }
    int num_of_valid_Bytes = 0;//定义有效字节数
    //去掉频度为0的字符
    for (auto &i: z) {
        if (i.sum != 0) {
            HuffmanTree[num_of_valid_Bytes].ch = i.pre_Number;
            HuffmanTree[num_of_valid_Bytes].count = i.sum;
            num_of_valid_Bytes++;
        }

    }
    infile.close();
    return num_of_valid_Bytes;
}

int Compress(Huffman_Node HuffmanTree[], int n, long file_Length, char *in_file_Name, char *out_file_Name) {
    FILE *open_in_File = fopen(in_file_Name, "rb");//打开压缩前的文件
    FILE *open_out_File = fopen(out_file_Name, "wb");//打开压缩后的文件

    unsigned char temp = '\0';//定义8比特临时的变量

    char cache[256] = "\0";//定义缓存流

    char suffix[10];//定义文件后缀名 字符数组
    int z = 0;
    int suffix_Length = strlen(in_file_Name);//获取文件后缀名长度
    for (int i = suffix_Length - 1; i > 0; i--) {
        //捕捉后缀标志，一个点，dot
        if (in_file_Name[i] == '.') {
            for (int j = i; j < suffix_Length; j++) {
                z++;
                suffix[z] = in_file_Name[j];

            }
        }

    }

    suffix[0] = z + '0';//获取文件后缀名的长度并且转成字符
    fwrite((char *) &suffix, sizeof(char), z + 1, open_out_File);//存储文件头部
    fwrite(&file_Length, sizeof(long), 1, open_out_File);//存总长度
    fwrite(&n, sizeof(int), 1, open_out_File);//存储字符的种类

    //存每个编号对应的字符、权重
    for (int i = 0; i < n; i++) {
        fwrite(&HuffmanTree[i].ch, sizeof(unsigned char), 1, open_out_File);
        fwrite(&HuffmanTree[i].count, sizeof(long), 1, open_out_File);
    }


    //当文件不为空的时候
    while (fread(&temp, sizeof(unsigned char), 1, open_in_File)) {
        for (int i = 0; i < n; i++) {
            if (temp == HuffmanTree[i].ch) {
                //过滤掉因为数组产生的非0非1的编码
                for (int j = 0; HuffmanTree[i].bits[j] == '0' || HuffmanTree[i].bits[j] == '1'; j++) {
                    strncat(cache, &HuffmanTree[i].bits[j], 1);//给缓存流复制
                }
            }
        }

        //缓存流大于等于8比特的字符进入该循环
        while (strlen(cache) >= 8) {
            temp = 0;
            for (int i = 0; i < 8; i++) {
                temp = temp << 1;//左移一位
                if (cache[i] == '1') {
                    temp = temp | 0x01;//在不影响其他位的情况下，最后一位 置 1
                }
            }
            fwrite(&temp, sizeof(unsigned char), 1, open_out_File);//写入文件
            strcpy(cache, cache + 8);//将写入文件的bits删除
        }
    }
    //将剩余的不足8位的个数传出
    int remain = strlen(cache);
    if (remain) {
        temp = 0;
        for (int i = 0; i < remain; i++) {
            temp = temp << 1;//左移 1
            //如果为1，就按位为1
            if (cache[i] == '1') {
                temp = temp | 0x01;
            }
        }
        temp <<= 8 - remain;//将编码字段从尾部移动到字节的高位
        fwrite(&temp, sizeof(unsigned char), 1, open_out_File);//写入最后一个
    }
    fclose(open_in_File);
    fclose(open_out_File);//关闭文件
    return 1;
}

int Extract(Huffman_Node HuffmanTree[], char *in_file_Name, char *out_file_Name) {
//    int i;
    char suffix_Length = 0;//定义后缀长度
    char suffix[10];//定义后缀数组储存后缀字符
    long file_Length;//定义文件总长度
    int kinds;//定义字符种类
    int node_sum;//定义节点总数
    unsigned long writen_Length = 0;//定义文件写入长度并初始化
    FILE *in_File, *out_File;
    unsigned char code_Temp;
    unsigned int root;//保存根索引

    in_File = fopen(in_file_Name, "rb");//以二进制方式打卡被压缩的文件
    //判断输入的文件是否存在
    if (in_File == nullptr)
        return -1;

    //提取文件后缀名长度
    fread(&suffix, sizeof(char), 1, in_File);
    int suffix_read = suffix_Length - '0';
    //读取文件后缀字符
    fread(&suffix, sizeof(char), 1, in_File);//读取文件的后缀字符
    fread(&file_Length, sizeof(long), 1, in_File);//读取文件的总长度
    fread(&kinds, sizeof(int), 1, in_File);//读取字符种类

    node_sum = 2 * kinds - 1;//根据字符种类数计算建立哈夫曼树所需要的节点数

    //初始化
    for (int i = 0; i < 512; i++) {
        HuffmanTree[i].parent = 1;
        HuffmanTree[i].ch = '\0';
        HuffmanTree[i].count = -1;
        HuffmanTree[i].left_Child = -1;
        HuffmanTree[i].right_Child = -1;

    }

    //读取压缩问价的前端字符和对应权重，以此来构建哈夫曼树
    for (int i = 0; i < 512; i++) {
        fread((char *) &HuffmanTree[i].ch, sizeof(unsigned char), 1, in_File);
        fread((char *) &HuffmanTree[i].count, sizeof(long), 1, in_File);//
    }

    Create_Huffman_Tree(HuffmanTree, kinds);//构建哈夫曼树指针，用孩子父亲表示法

    Create_Huffman_Code(HuffmanTree, kinds);//生成哈夫曼编码

    strncat(out_file_Name, suffix, suffix_read);

    out_File = fopen(out_file_Name, "wb");//打开压缩后将要生成的文件

    root = node_sum - 1;//初始化根节点的下标

    while (true) {
        fread(&code_Temp, sizeof(unsigned char), 1, in_File);//读取一个字符长度的编码

        //处理刚才读取的一个字符长度编码
        for (int i = 0; i < 8; i++) {
            //由根向下至叶节点，正向匹配编码对应的字符，逆向
            if (code_Temp & 128)
                root = HuffmanTree[root].right_Child;
            else
                root = HuffmanTree[root].left_Child;

            if (root < kinds) {
                fwrite(&HuffmanTree[root].ch, sizeof(unsigned char), 1, out_File);
                writen_Length++;
                if (writen_Length == file_Length)
                    break;
                root = node_sum-1;

            }
            code_Temp <<= 1;

        }
        if (writen_Length == file_Length)
            break;
    }

    fclose(in_File);
    fclose(out_File);

    return 1;

}

int Compress_File(int *n, int *flag, char *in_file_name, char *out_file_name, Huffman_Node *HuffmanTree) {
    FILE *file;
    file = fopen(in_file_name, "r");
    fseek(file, SEEK_SET, SEEK_END);
    long file_length = ftell(file);
    fclose(file);

    *n = read_File(HuffmanTree, in_file_name);
    Create_Huffman_Tree(HuffmanTree, *n);
    Create_Huffman_Code(HuffmanTree, *n);
    int is_OK = Compress(HuffmanTree, *n, file_length, in_file_name, out_file_name);
    if (is_OK != -1)
        return 1;
    else
        return 0;


}

int Extract_File(char *in_file_name, char *out_file_name, int flag,Huffman_Node *HuffmanTree) {
    int is_EXIT = Extract(HuffmanTree, in_file_name, out_file_name);
    if (is_EXIT != -1)
        return 1;
    else
        return 0;
}
