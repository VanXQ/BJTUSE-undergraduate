#include <iostream>
#include<iomanip>
#include <fstream>
#include "header/read_file.h"
#include"QDir"

using namespace std;

int readFILE(HuffNode Huffman_tree[], const string &InFile) {
    std::fstream infile;
    unsigned char ch;
    FILE_STRUCT z[BYTE_SIZE] = {0};//初始化
    for (int k = 0; k < BYTE_SIZE; k++)//初始化
        z[k].file_id = k;
    infile.open(InFile); //打开文件
    if (!infile) {
        std::cout << "打开文件失败" << std::endl;
    }
    while (infile.get((char &) ch))//获取文件信息
    {
        for (int g = 0; g < BYTE_SIZE; g++) {
            if (ch == g) //统计字符频度
                z[g].sum++;
//            printf("%c frequency %d\n",ch,z[g].sum);
        }
    }
    for (int m = 0; m < BYTE_SIZE; m++)//冒泡排序
    {
        for (int n = m + 1; n <= 255; n++) {
            if (z[n].sum <= z[m].sum)//频度从小到大排序
            {
                int temp1 = z[n].sum;
                z[n].sum = z[m].sum;
                z[m].sum = temp1;

                int temp2 = z[n].file_id;
                z[n].file_id = z[m].file_id;
                z[m].file_id = temp2;
            }
        }
    }
//    for (int m = 0; m < BYTE_SIZE; m++)//冒泡排序
//    {
//        for (int n = m + 1; n <= 255; n++) {
//            if (z[n].sum <= z[m].sum)//序号排序
//            {
//                int temp2 = z[n].file_id;
//                z[n].file_id = z[m].file_id;
//                z[m].file_id = temp2;
//            }
//        }
//    }
    int d = 0;
    for (auto &j: z)//去掉频度为0的字符
    {
        if (j.sum != 0) {
            Huffman_tree[d].ch = j.file_id;
            Huffman_tree[d].weight = j.sum;
            d++;
        }
    }
    printf("%d characters with frequency 0 are removed.\n",d);
    infile.close();
    return d;
}
