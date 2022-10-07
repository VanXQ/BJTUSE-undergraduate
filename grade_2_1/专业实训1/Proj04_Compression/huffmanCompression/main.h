#include<iostream>
#include<stdlib.h>
#include<string>
#include <stdlib.h>
//#include"huffmantree.h"
//#include "FILEio.h"
int compressfile(int *n, int *flag, char * ifname, char * ofname, HuffNode *hufftree)
{
        FILE *file;
        file = fopen(ifname, "r");
        fseek(file, SEEK_SET, SEEK_END);
        long flength = ftell(file);
        fclose(file);

        *n = readFILE(hufftree, ifname);
        CreateHuffmanTree(hufftree, *n);
        HuffmanCoding(hufftree, *n);
        int isok = compress(hufftree, *n, flength, ifname, ofname);
        if (isok != -1)
        {
                return 1;
        }else
        {
            return 0;
        }
}
int decompressfile(char * ifname, char * ofname, int *flag, HuffNode *hufftree)
{
        int isexit = extract(hufftree, ifname, ofname);

        if (isexit != -1)
        {
                return 1;
        }else
        {
            return 0;
        }

}
