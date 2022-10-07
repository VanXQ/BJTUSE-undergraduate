#ifndef HUF_HUFFMANTREE_H
#define HUF_HUFFMANTREE_H

#pragma warning(disable:4996)

#include <iostream>
#include <cstdlib>
#include <cstring>

#define OKAY 0
#define BYTE_SIZE 256
using namespace std;
struct HuffNode {
    [[maybe_unused]] unsigned char ch;  //字节符
    unsigned int weight;  //字节出现频度
    unsigned int parent; //父节点
    unsigned int left_child;  //左孩子
    [[maybe_unused]] unsigned int right_child;  //右孩子
    char bits[256]; // 哈夫曼编码
};

int CreateHuffmanTree(HuffNode *Huffman_tree, int n);

void select(HuffNode *Huffman_tree, unsigned int n, unsigned int *smallest_1, unsigned int *smallest_2);

int HuffmanCoding(HuffNode *Huffman_tree, int n);


#endif
