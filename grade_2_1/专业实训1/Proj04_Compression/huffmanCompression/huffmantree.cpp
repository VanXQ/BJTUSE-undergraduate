#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"huffmantree.h"
#include<string.h>
#include<iomanip>
#define OK 0
#define BYTESIZE 256
#define MAXVALUE 999999
using namespace std;
//huffmantree
int CreateHuffmanTree(HuffNode *huf_tree, int n)
{
    int i;
    int s1, s2;
    for (i = n; i < 2 * n - 1; ++i)
    {
        select(huf_tree, i, &s1, &s2);
        huf_tree[s1].parent = i;
        huf_tree[s2].parent = i;
        huf_tree[i].lchild = s1;
        huf_tree[i].rchild = s2;
        huf_tree[i].weight = huf_tree[s1].weight + huf_tree[s2].weight;
    }
    return OK;
}

void select(HuffNode *huf_tree, int n, int *s1, int *s2)
{
    unsigned int i;
    unsigned long min = LONG_MAX;
    for (i = 0; i < n; i++)
        if (huf_tree[i].parent == -1 && huf_tree[i].weight < min)
        {
            min = huf_tree[i].weight;
            *s1 = i;
        }
    huf_tree[*s1].parent = 1;
                                // 找次小结点
    min = LONG_MAX;
    for (i = 0; i < n; i++)
    {
        if (huf_tree[i].parent == -1 && huf_tree[i].weight < min)
        {
            min = huf_tree[i].weight;
            *s2 = i;
        }
    }
}
int HuffmanCoding(HuffNode *huf_tree, int n)
{
    int i;
    int cur, next, index;
    char code_tmp[256];
    code_tmp[255] = '\0';

    for (i = 0; i < n; ++i)
    {
        index = 256 - 1;

        for (cur = i, next = huf_tree[i].parent; next != -1; next = huf_tree[next].parent)
        {
            if (huf_tree[next].lchild == cur)
                code_tmp[--index] = '0';	// 左‘0’
            else
                code_tmp[--index] = '1';	// 右‘1’

            cur = next;

        }
        strcpy(huf_tree[i].bits, &code_tmp[index]);
    }
    return OK;
}
