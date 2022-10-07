//
// Created by Van_XQ on 2021/11/1.
//

#ifndef PROJ04_COMPRESSION_HUFFMAN_TREE_H
#define PROJ04_COMPRESSION_HUFFMAN_TREE_H

#include <fstream>
#include <iostream>
#include "string"

using namespace std;

////哈夫曼树的节点
//struct Huffman_Node;
//
////文件的结构体
//struct file_Struct;


struct Huffman_Node {
    unsigned char ch;//字节符号
    long count;//字节出现频度
    int parent;//父亲节点
    int left_Child;//左孩子
    int right_Child;//右孩子
    char bits[256];//哈夫曼编码位数
};

struct file_Struct {
    int sum;//定义总和
    int pre_Number;//定义序号
};


//建立哈夫曼树
int Create_Huffman_Tree(Huffman_Node *Huffman_Tree, int n);

//选择最小和次小的两个节点，并且建立起哈夫曼树的调用。
void Select(Huffman_Node *Huffman_Tree, int n, int *smallest_1, int *smallest_2) ;

//生成哈夫曼编码
int Create_Huffman_Code(Huffman_Node *Huffman_Tree, int n);

#endif //PROJ04_COMPRESSION_HUFFMAN_TREE_H
