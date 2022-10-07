////
//// Created by Van_XQ on 2021/11/1.
////
//
//#include <cstring>
//#include "include/compress.h"
////#include "include/huffman_Tree.h"
//
//void Compress(Huffman_Node HuffmanTree[], int n, long file_Length, char *in_file_Name, char *out_file_Name) {
//    FILE *open_in_File = fopen(in_file_Name, "rb");//打开压缩前的文件
//    FILE *open_out_File = fopen(out_file_Name, "wb");//打开压缩后的文件
//
//    unsigned char temp = '\0';//定义8比特临时的变量
//
//    char cache[256] = "\0";//定义缓存流
//
//    char suffix[10];//定义文件后缀名 字符数组
//    int z = 0;
//    int suffix_Length = strlen(in_file_Name);//文件后缀名长度
//    for (int i = suffix_Length - 1; i > 0; i--) {
//        //捕捉后缀标志，一个点，dot
//        if (in_file_Name[i] == '.') {
//            for (int j = i; j < suffix_Length; j++) {
//                z++;
//                suffix[z] = in_file_Name[j];
//
//            }
//        }
//
//    }
//
//    suffix[0] = z + '0';//获取文件后缀名的长度并且转成字符
//    fwrite((char *) &suffix, sizeof(char), z + 1, open_out_File);//存储文件头部
//    fwrite(&file_Length, sizeof(long), 1, open_out_File);//存总长度
//    fwrite(&n, sizeof(int), 1, open_out_File);//存储字符的种类
//
//    //存每个编号对应的字符、权重
//    for (int i = 0; i < n; i++){
//        fwrite(&HuffmanTree[i].ch, sizeof(unsigned char), 1, open_out_File);
//        fwrite(&HuffmanTree[i].count, sizeof(long), 1,open_out_File);
//    }
//
//
//    //当文件不为空的时候
//    while (fread(&temp, sizeof(unsigned char), 1, open_in_File)) {
//        for (int i = 0; i < n; i++) {
//            if (temp == HuffmanTree[i].ch) {
//                //过滤掉因为数组产生的非0非1的编码
//                for (int j = 0; HuffmanTree[i].bits[j]=='0'||HuffmanTree[i].bits[j] =='1'; j++) {
//                    strncat(cache, &HuffmanTree[i].bits[j], 1);//给缓存流复制
//                }
//            }
//        }
//
//        //缓存流大于等于8比特的字符进入该循环
//        while (strlen(cache) >= 8) {
//            temp = 0;
//            for (int i = 0; i < 8; i++) {
//                temp = temp << 1;//左移一位
//                if (cache[i] == '1') {
//                    temp = temp | 0x01;//在不影响其他位的情况下，最后一位 置 1
//                }
//            }
//            fwrite(&temp, sizeof(unsigned char), 1, open_out_File);//写入文件
//            strcpy(cache, cache + 8);//将写入文件的bits删除
//        }
//    }
//    //将剩余的不足8位的个数传出
//    int remain = strlen(cache);
//    if (remain) {
//        temp = 0;
//        for (int i = 0; i < remain; i++) {
//            temp = temp << 1;//左移 1
//            //如果为1，就按位为1
//            if (cache[i] == '1') {
//                temp = temp | 0x01;
//            }
//        }
//        temp <<= 8 - remain;//将编码字段从尾部移动到字节的高位
//        fwrite(&temp, sizeof(unsigned char), 1, open_out_File);//写入最后一个
//    }
//    fclose(open_in_File);
//    fclose(open_out_File);//关闭文件
//}
//
//void Calculate_Rate(){
//
//}
