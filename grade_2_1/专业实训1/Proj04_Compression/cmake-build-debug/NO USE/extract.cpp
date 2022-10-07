////
//// Created by Van_XQ on 2021/11/1.
////
//
//#include <cstring>
//#include "include/extract.h"
//int Extract(Huffman_Node HuffmanTree[],char *in_file_Name,char *out_file_Name){
////    int i;
//    char suffix_Length = 0;//定义后缀长度
//    char suffix[10];//定义后缀数组储存后缀字符
//    long file_Length;//定义文件总长度
//    int kinds;//定义字符种类
//    int node_sum;//定义节点总数
//    unsigned long writen_Length=0;//定义文件写入长度并初始化
//    FILE * in_File,* out_File;
//    unsigned char code_Temp;
////    unsigned int root;//保存根索引
////
////    in_File= fopen(in_file_Name,"rb");//以二进制方式打卡被压缩的文件
//    判断输入的文件是否存在
////    if (in_File ==nullptr)
//        return -1;
//
//    //提取文件后缀名长度
//    fread(&suffix,sizeof(char),1,in_File);
//    int suffix_read= suffix_Length - '0';
//    //读取文件后缀字符
//    fread(&suffix,sizeof(char ),1,in_File);//读取文件的后缀字符
//    fread(&file_Length,sizeof(long),1,in_File);//读取文件的总长度
//    fread(&kinds, sizeof(int),1,in_File);//读取字符种类
//
//    node_sum=2*kinds-1;//根据字符种类数计算建立哈夫曼树所需要的节点数
//
//    //初始化
//    for (int i = 0; i < 512; i++) {
//        HuffmanTree[i].parent=1;
//        HuffmanTree[i].ch='\0';
//        HuffmanTree[i].count=-1;
//        HuffmanTree[i].left_Child=-1;
//        HuffmanTree[i].right_Child=-1;
//
//    }
//
//    //读取压缩问价的前端字符和对应权重，以此来构建哈夫曼树
//    for (int i = 0; i < 512; i++) {
//        fread((char *)&HuffmanTree[i].ch, sizeof(unsigned char ),1,in_File);
//        fread((char *)&HuffmanTree[i].count, sizeof(long),1,in_File);//
//    }
//
//    Create_Huffman_Tree(HuffmanTree,kinds);//构建哈夫曼树指针，用孩子父亲表示法
//
//    Create_Huffman_Code(HuffmanTree,kinds);//生成哈夫曼编码
//
//    strncat(out_file_Name,suffix,suffix_read);
//
//    out_File= fopen(out_file_Name,"wb");//打开压缩后将要生成的文件
//
//    root=node_sum-1;//初始化根节点的下标
//
//    while (true) {
//        fread(&code_Temp, sizeof(unsigned char), 1, in_File);//读取一个字符长度的编码
//
//        //处理刚才读取的一个字符长度编码
//        for (int i = 0; i < 8; i++) {
//            //由根向下至叶节点，正向匹配编码对应的字符，逆向
//            if (code_Temp&128)
//                root=HuffmanTree[root].right_Child;
//            else
//                root=HuffmanTree[root].left_Child;
//
//            if (root<kinds){
//                fwrite(&HuffmanTree[root].ch, sizeof(unsigned char ),1,out_File);
//                writen_Length++;
//                if (writen_Length==file_Length)
//                    break;
//                root=node_sum;
//
//            }
//            code_Temp<<=1;
//
//        }
//        if (writen_Length==file_Length)
//            break;
//    }
//
//    fclose(in_File);
//    fclose(out_File);
//
//    return 1;
//
//}