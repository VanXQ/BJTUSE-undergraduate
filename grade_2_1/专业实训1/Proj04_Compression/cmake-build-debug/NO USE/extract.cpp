////
//// Created by Van_XQ on 2021/11/1.
////
//
//#include <cstring>
//#include "include/extract.h"
//int Extract(Huffman_Node HuffmanTree[],char *in_file_Name,char *out_file_Name){
////    int i;
//    char suffix_Length = 0;//�����׺����
//    char suffix[10];//�����׺���鴢���׺�ַ�
//    long file_Length;//�����ļ��ܳ���
//    int kinds;//�����ַ�����
//    int node_sum;//����ڵ�����
//    unsigned long writen_Length=0;//�����ļ�д�볤�Ȳ���ʼ��
//    FILE * in_File,* out_File;
//    unsigned char code_Temp;
////    unsigned int root;//���������
////
////    in_File= fopen(in_file_Name,"rb");//�Զ����Ʒ�ʽ�򿨱�ѹ�����ļ�
//    �ж�������ļ��Ƿ����
////    if (in_File ==nullptr)
//        return -1;
//
//    //��ȡ�ļ���׺������
//    fread(&suffix,sizeof(char),1,in_File);
//    int suffix_read= suffix_Length - '0';
//    //��ȡ�ļ���׺�ַ�
//    fread(&suffix,sizeof(char ),1,in_File);//��ȡ�ļ��ĺ�׺�ַ�
//    fread(&file_Length,sizeof(long),1,in_File);//��ȡ�ļ����ܳ���
//    fread(&kinds, sizeof(int),1,in_File);//��ȡ�ַ�����
//
//    node_sum=2*kinds-1;//�����ַ����������㽨��������������Ҫ�Ľڵ���
//
//    //��ʼ��
//    for (int i = 0; i < 512; i++) {
//        HuffmanTree[i].parent=1;
//        HuffmanTree[i].ch='\0';
//        HuffmanTree[i].count=-1;
//        HuffmanTree[i].left_Child=-1;
//        HuffmanTree[i].right_Child=-1;
//
//    }
//
//    //��ȡѹ���ʼ۵�ǰ���ַ��Ͷ�ӦȨ�أ��Դ���������������
//    for (int i = 0; i < 512; i++) {
//        fread((char *)&HuffmanTree[i].ch, sizeof(unsigned char ),1,in_File);
//        fread((char *)&HuffmanTree[i].count, sizeof(long),1,in_File);//
//    }
//
//    Create_Huffman_Tree(HuffmanTree,kinds);//������������ָ�룬�ú��Ӹ��ױ�ʾ��
//
//    Create_Huffman_Code(HuffmanTree,kinds);//���ɹ���������
//
//    strncat(out_file_Name,suffix,suffix_read);
//
//    out_File= fopen(out_file_Name,"wb");//��ѹ����Ҫ���ɵ��ļ�
//
//    root=node_sum-1;//��ʼ�����ڵ���±�
//
//    while (true) {
//        fread(&code_Temp, sizeof(unsigned char), 1, in_File);//��ȡһ���ַ����ȵı���
//
//        //����ղŶ�ȡ��һ���ַ����ȱ���
//        for (int i = 0; i < 8; i++) {
//            //�ɸ�������Ҷ�ڵ㣬����ƥ������Ӧ���ַ�������
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