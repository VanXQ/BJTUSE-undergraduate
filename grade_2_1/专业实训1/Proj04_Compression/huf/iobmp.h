#pragma once

#include<iostream>
#include<cstdlib>

using namespace std;

int extract(HuffNode Huffman_tree[], char *in_file_name, char *out_file_name);

int compress(HuffNode Huffman_tree[], int n, long file_length, char *in_file_name, char *out_file_name);
//int compress_file(int *n, int *flag, char * in_file_name, char * out_file_name, HuffNode *Huffman_tree);
//int extract_file(char * in_file_name, char * out_file_name, int *flag, HuffNode *Huffman_tree);
