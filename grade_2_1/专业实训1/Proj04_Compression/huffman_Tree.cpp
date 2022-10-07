//
// Created by Van_XQ on 2021/11/1.
//

#include <cstring>
#include "include/huffman_Tree.h"

using namespace std;

int Create_Huffman_Tree(Huffman_Node *Huffman_Tree, int n) {
    int smallest_1, smallest_2;
    for (int i = n; i < 2 * n - 1; ++i) {
        Select(Huffman_Tree, i, &smallest_1, &smallest_2);//ѡ�����С�������ڵ�
        Huffman_Tree[smallest_1].parent = i;//ԭ���˫��Ϊi
        Huffman_Tree[smallest_2].parent = i;//ԭ���˫��Ϊi
        Huffman_Tree[i].left_Child = smallest_1;//�½ڵ�����������С��
        Huffman_Tree[i].right_Child = smallest_2;//�½ڵ���������ǵڶ�С��
        Huffman_Tree[i].count = Huffman_Tree[smallest_1].count + Huffman_Tree[smallest_2].count;//�ϳɺ���½ڵ��Ȩֵ
    }
    return 0;
}

void Select(Huffman_Node *Huffman_Tree, int n, int *smallest_1, int *smallest_2) {

    unsigned long min = LONG_MAX;
    for (unsigned int i = 0; i < n; i++)
        if (Huffman_Tree[i].parent == -1 && Huffman_Tree[i].count < min) {
            min = Huffman_Tree[i].count;
            *smallest_1 = i;//��¼�±�
        }
    Huffman_Tree[*smallest_1].parent = 1;//��Ǵ˽ڵ��Ѿ���ѡ��

    //�ҵڶ�С�Ľڵ�
    min = LONG_MAX;
    for (unsigned int i = 0; i < n; i++) {
        if (Huffman_Tree[i].parent == -1 && Huffman_Tree[i].count < min) {

            min = Huffman_Tree[i].count;
            *smallest_2 = i;
        }
    }
}


int Create_Huffman_Code(Huffman_Node *Huffman_Tree, int n) {
    int i, current, next, index;
    char code_temp[256];//����һ���ݴ��������飬���256��Ҷ�ӣ����볤���������255
    code_temp[255] = '\0';

    for (i = 0; i < n; ++i) {
        index = 255;
        for (current = i, next = Huffman_Tree[i].parent; next != -1; next = Huffman_Tree[next].parent) {
            if (Huffman_Tree[next].left_Child == current)
                code_temp[--index] = '0';//��� 0
            else
                code_temp[--index] = '1';//�ұ� 1

            current = next;
        }
        strcpy(Huffman_Tree[i].bits, &code_temp[index]);//���򱣴���뵽���ڵ���Ӧ��index�ǵ�һ��
    }
    return 0;
}


