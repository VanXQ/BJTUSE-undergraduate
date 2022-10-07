#ifndef FILE_IO_DEF
#define FILE_IO_DEF

#include "huffmantree.h"

struct FILE_STRUCT {
    int sum;
    int file_id;
};

int readFILE(HuffNode Huffman_tree[], const string &InFile);

#endif
