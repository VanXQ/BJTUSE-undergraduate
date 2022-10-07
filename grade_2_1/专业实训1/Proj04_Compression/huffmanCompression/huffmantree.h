#ifndef HUFFMANIMAGECOMPRESSION_HUFFMANCOMPRESSION_H
#define HUFFMANIMAGECOMPRESSION_HUFFMANCOMPRESSION_H

#pragma warning(disable:4996)
#include <iostream>
#include <stdlib.h>
#include <string.h>

#define ERROR  -1
#define OK 0
#define BYTESIZE 256
#define MAXVALUE 999999
#define MaxSize 50
#define MAX 32767
using namespace std;
struct HuffNode
{
    unsigned char ch;  //字节符
    int weight;  //字节出现频度
    int parent; //父节点
    int lchild;  //左孩子
    int rchild;  //右孩子
    char bits[256]; // 哈夫曼编码
};

typedef char** HuffmanCode;
int CreateHuffmanTree(HuffNode *huf_tree, int n);
void select(HuffNode *huf_tree, int n, int *s1, int *s2);
int HuffmanCoding(HuffNode *huf_tree, int n);


#endif
