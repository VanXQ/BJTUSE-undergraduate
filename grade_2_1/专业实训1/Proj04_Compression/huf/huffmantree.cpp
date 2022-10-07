
#include<cstdlib>
#include"huffmantree.h"
#include<cstring>

#define OKAY 0
#define BYTE_SIZE 256
using namespace std;


int CreateHuffmanTree(HuffNode *Huffman_tree, int n) {
    int i;
    unsigned int smallest_1, smallest_2;
    for (i = n; i < 2 * n - 1; ++i) {
        select(Huffman_tree, i, &smallest_1, &smallest_2);
        Huffman_tree[smallest_1].parent = i;
        Huffman_tree[smallest_2].parent = i;
        Huffman_tree[i].left_child = smallest_1;
        Huffman_tree[i].right_child = smallest_2;
        Huffman_tree[i].weight = Huffman_tree[smallest_1].weight + Huffman_tree[smallest_2].weight;
    }
    return OKAY;
}

void select(HuffNode *Huffman_tree, unsigned int n, unsigned int *smallest_1, unsigned int *smallest_2) {
    unsigned int i;
    unsigned long min = LONG_MAX;
    for (i = 0; i < n; i++)
        if (Huffman_tree[i].parent == -1 && Huffman_tree[i].weight < min) {
            min = Huffman_tree[i].weight;
            *smallest_1 = i;
        }
    Huffman_tree[*smallest_1].parent = 1;
    // 找次小结点
    min = LONG_MAX;
    for (i = 0; i < n; i++) {
        if (Huffman_tree[i].parent == -1 && Huffman_tree[i].weight < min) {
            min = Huffman_tree[i].weight;
            *smallest_2 = i;
        }
    }
}

int HuffmanCoding(HuffNode *Huffman_tree, int n) {
    int i;
    unsigned int current, next, index;
    char code_tmp[BYTE_SIZE];
    code_tmp[BYTE_SIZE-1] = '\0';

    for (i = 0; i < n; ++i) {
        index = BYTE_SIZE - 1;

        for (current = i, next = Huffman_tree[i].parent; next != -1; next = Huffman_tree[next].parent) {
            if (Huffman_tree[next].left_child == current) {
                code_tmp[--index] = '0';    // 左‘0’
                printf("0");
            }
            else {
                code_tmp[--index] = '1';    // 右‘1’
                printf("1");
            }
            current = next;
//            printf(" ");
        }
        strcpy(Huffman_tree[i].bits, &code_tmp[index]);
    }
    return OKAY;
}
