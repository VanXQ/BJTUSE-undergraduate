//
// Created by Van_XQ on 2021/11/18.
//

#ifndef PROJ04_COMPRESSION_FUNCTION_H
#define PROJ04_COMPRESSION_FUNCTION_H


#include "huffman_Tree.h"

//读取文件的函数
int Read_File(Huffman_Node HuffmanTree[], const string& In_File);

int Compress(Huffman_Node Huffman_Tree[], int n, long file_Length, char *in_file_Name, char *out_file_Name);

int Extract(Huffman_Node HuffmanTree[], char *in_file_Name, char *out_file_Name);

int Compress_File(int *n, int *flag, char *in_file_name, char *out_file_name, Huffman_Node *HuffmanTree);

int Extract_File(char *in_file_name, char *out_file_name, Huffman_Node *HuffmanTree);

#endif //PROJ04_COMPRESSION_FUNCTION_H
