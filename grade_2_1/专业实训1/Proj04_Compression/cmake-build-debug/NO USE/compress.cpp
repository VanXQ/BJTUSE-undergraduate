////
//// Created by Van_XQ on 2021/11/1.
////
//
//#include <cstring>
//#include "include/compress.h"
////#include "include/huffman_Tree.h"
//
//void Compress(Huffman_Node HuffmanTree[], int n, long file_Length, char *in_file_Name, char *out_file_Name) {
//    FILE *open_in_File = fopen(in_file_Name, "rb");//��ѹ��ǰ���ļ�
//    FILE *open_out_File = fopen(out_file_Name, "wb");//��ѹ������ļ�
//
//    unsigned char temp = '\0';//����8������ʱ�ı���
//
//    char cache[256] = "\0";//���建����
//
//    char suffix[10];//�����ļ���׺�� �ַ�����
//    int z = 0;
//    int suffix_Length = strlen(in_file_Name);//�ļ���׺������
//    for (int i = suffix_Length - 1; i > 0; i--) {
//        //��׽��׺��־��һ���㣬dot
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
//    suffix[0] = z + '0';//��ȡ�ļ���׺���ĳ��Ȳ���ת���ַ�
//    fwrite((char *) &suffix, sizeof(char), z + 1, open_out_File);//�洢�ļ�ͷ��
//    fwrite(&file_Length, sizeof(long), 1, open_out_File);//���ܳ���
//    fwrite(&n, sizeof(int), 1, open_out_File);//�洢�ַ�������
//
//    //��ÿ����Ŷ�Ӧ���ַ���Ȩ��
//    for (int i = 0; i < n; i++){
//        fwrite(&HuffmanTree[i].ch, sizeof(unsigned char), 1, open_out_File);
//        fwrite(&HuffmanTree[i].count, sizeof(long), 1,open_out_File);
//    }
//
//
//    //���ļ���Ϊ�յ�ʱ��
//    while (fread(&temp, sizeof(unsigned char), 1, open_in_File)) {
//        for (int i = 0; i < n; i++) {
//            if (temp == HuffmanTree[i].ch) {
//                //���˵���Ϊ��������ķ�0��1�ı���
//                for (int j = 0; HuffmanTree[i].bits[j]=='0'||HuffmanTree[i].bits[j] =='1'; j++) {
//                    strncat(cache, &HuffmanTree[i].bits[j], 1);//������������
//                }
//            }
//        }
//
//        //���������ڵ���8���ص��ַ������ѭ��
//        while (strlen(cache) >= 8) {
//            temp = 0;
//            for (int i = 0; i < 8; i++) {
//                temp = temp << 1;//����һλ
//                if (cache[i] == '1') {
//                    temp = temp | 0x01;//�ڲ�Ӱ������λ������£����һλ �� 1
//                }
//            }
//            fwrite(&temp, sizeof(unsigned char), 1, open_out_File);//д���ļ�
//            strcpy(cache, cache + 8);//��д���ļ���bitsɾ��
//        }
//    }
//    //��ʣ��Ĳ���8λ�ĸ�������
//    int remain = strlen(cache);
//    if (remain) {
//        temp = 0;
//        for (int i = 0; i < remain; i++) {
//            temp = temp << 1;//���� 1
//            //���Ϊ1���Ͱ�λΪ1
//            if (cache[i] == '1') {
//                temp = temp | 0x01;
//            }
//        }
//        temp <<= 8 - remain;//�������ֶδ�β���ƶ����ֽڵĸ�λ
//        fwrite(&temp, sizeof(unsigned char), 1, open_out_File);//д�����һ��
//    }
//    fclose(open_in_File);
//    fclose(open_out_File);//�ر��ļ�
//}
//
//void Calculate_Rate(){
//
//}
