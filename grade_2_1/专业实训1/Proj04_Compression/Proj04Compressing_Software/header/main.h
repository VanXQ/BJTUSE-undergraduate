#include<iostream>
#include<cstdlib>
#include<string>
#include "read_file.h"
#include "header/compress_and_extract.h"
#include"header/huffmantree.h"

int compress_file(int *n, [[maybe_unused]] int *flag, char *in_file_name, char *out_file_name, HuffNode *Huffman_tree) {
    FILE *file;
    file = fopen(in_file_name, "r");
    fseek(file, SEEK_SET, SEEK_END);
    long file_length = ftell(file);
    fclose(file);

    *n = readFILE(Huffman_tree, in_file_name);
    CreateHuffmanTree(Huffman_tree, *n);
    HuffmanCoding(Huffman_tree, *n);
    int is_OK = compress(Huffman_tree, *n, file_length, in_file_name, out_file_name);
    if (is_OK != -1) {
        return 1;
    } else {
        return 0;
    }
}

int extract_file(char *in_file_name, char *out_file_name, [[maybe_unused]] int *flag, HuffNode *Huffman_tree) {
    int is_EXIT = extract(Huffman_tree, in_file_name, out_file_name);

    if (is_EXIT != -1) {
        return 1;
    } else {
        return 0;
    }

}
