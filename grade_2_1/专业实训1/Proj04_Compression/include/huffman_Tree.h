//
// Created by Van_XQ on 2021/11/1.
//

#ifndef PROJ04_COMPRESSION_HUFFMAN_TREE_H
#define PROJ04_COMPRESSION_HUFFMAN_TREE_H

#include <fstream>
#include <iostream>
#include "string"

using namespace std;

////���������Ľڵ�
//struct Huffman_Node;
//
////�ļ��Ľṹ��
//struct file_Struct;


struct Huffman_Node {
    unsigned char ch;//�ֽڷ���
    long count;//�ֽڳ���Ƶ��
    int parent;//���׽ڵ�
    int left_Child;//����
    int right_Child;//�Һ���
    char bits[256];//����������λ��
};

struct file_Struct {
    int sum;//�����ܺ�
    int pre_Number;//�������
};


//������������
int Create_Huffman_Tree(Huffman_Node *Huffman_Tree, int n);

//ѡ����С�ʹ�С�������ڵ㣬���ҽ�������������ĵ��á�
void Select(Huffman_Node *Huffman_Tree, int n, int *smallest_1, int *smallest_2) ;

//���ɹ���������
int Create_Huffman_Code(Huffman_Node *Huffman_Tree, int n);

#endif //PROJ04_COMPRESSION_HUFFMAN_TREE_H
