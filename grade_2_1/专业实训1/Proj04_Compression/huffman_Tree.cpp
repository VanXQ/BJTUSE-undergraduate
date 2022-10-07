//
// Created by Van_XQ on 2021/11/1.
//

#include <cstring>
#include "include/huffman_Tree.h"

using namespace std;

int Create_Huffman_Tree(Huffman_Node *Huffman_Tree, int n) {
    int smallest_1, smallest_2;
    for (int i = n; i < 2 * n - 1; ++i) {
        Select(Huffman_Tree, i, &smallest_1, &smallest_2);//选择出最小的两个节点
        Huffman_Tree[smallest_1].parent = i;//原点的双亲为i
        Huffman_Tree[smallest_2].parent = i;//原点的双亲为i
        Huffman_Tree[i].left_Child = smallest_1;//新节点左子树是最小的
        Huffman_Tree[i].right_Child = smallest_2;//新节点的右子树是第二小的
        Huffman_Tree[i].count = Huffman_Tree[smallest_1].count + Huffman_Tree[smallest_2].count;//合成后的新节点的权值
    }
    return 0;
}

void Select(Huffman_Node *Huffman_Tree, int n, int *smallest_1, int *smallest_2) {

    unsigned long min = LONG_MAX;
    for (unsigned int i = 0; i < n; i++)
        if (Huffman_Tree[i].parent == -1 && Huffman_Tree[i].count < min) {
            min = Huffman_Tree[i].count;
            *smallest_1 = i;//记录下标
        }
    Huffman_Tree[*smallest_1].parent = 1;//标记此节点已经被选中

    //找第二小的节点
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
    char code_temp[256];//定义一个暂存编码的数组，最多256个叶子，编码长度最长不超过255
    code_temp[255] = '\0';

    for (i = 0; i < n; ++i) {
        index = 255;
        for (current = i, next = Huffman_Tree[i].parent; next != -1; next = Huffman_Tree[next].parent) {
            if (Huffman_Tree[next].left_Child == current)
                code_temp[--index] = '0';//左边 0
            else
                code_temp[--index] = '1';//右边 1

            current = next;
        }
        strcpy(Huffman_Tree[i].bits, &code_temp[index]);//正向保存编码到树节点相应域，index是第一个
    }
    return 0;
}


