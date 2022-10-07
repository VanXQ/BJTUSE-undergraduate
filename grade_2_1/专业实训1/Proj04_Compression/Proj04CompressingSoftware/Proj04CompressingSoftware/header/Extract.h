//
// Created by Van_XQ on 2021/11/1.
//

#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <climits>
#include "Compress.h"

// ��ѹ����
int extract(HuffNode huf_tree[], char *ifname, char *ofname) {
    int i;
    char suffix;//��׺����
    char tou[20];//��׺�ַ�
    long flength;//�ļ��ܳ���
    int n;//�ַ�����
    int node_num;//�������
    unsigned long writen_len = 0;// �����ļ�д�볤��
    FILE *infile, *outfile;
    unsigned char code_temp;
    unsigned int root;// ���������

    infile = fopen(ifname, "rb");// �Զ����Ʒ�ʽ��ѹ���ļ�
    // �ж������ļ��Ƿ����
    if (infile == nullptr)
        return -1;

    //��ȡ�ļ���׺������
    fread(&suffix, sizeof(char), 1, infile);
    //�ַ�ת����
    int suffix_read = suffix - '0';
    //��ȡ�ļ���׺�ַ�
    fread(&tou, sizeof(char), suffix_read, infile);//��ȡ�ļ���׺�ַ�
    fread(&flength, sizeof(long), 1, infile);//��ȡ�ļ��ܳ���
    fread(&n, sizeof(int), 1, infile);//��ȡ�ַ�����

    node_num = 2 * n - 1;// �����ַ������������㽨������������������

    // ��ʼ��

    for (int a = 0; a < 512; a++) {
        huf_tree[a].parent = -1;
        huf_tree[a].ch = '\0';
        huf_tree[a].count = -1;
        huf_tree[a].lch = -1;
        huf_tree[a].rch = -1;
    }

    // ��ȡѹ���ļ�ǰ�˵��ַ�����ӦȨ�أ������ؽ���������
    for (i = 0; i < n; i++) {
        fread((char *) &huf_tree[i].ch, sizeof(unsigned char), 1, infile);        // �����ַ�
        fread((char *) &huf_tree[i].count, sizeof(long), 1, infile);    // �����ַ���ӦȨ��
    }

    creat(huf_tree, n);//����������ָ�뺢�Ӹ��ױ�ʾ��
    creat_hmcode(huf_tree, n);//���ɹ���������



    strncat(ofname, tou, suffix_read);

    outfile = fopen(ofname, "wb");// ��ѹ�������ɵ��ļ�
    root = node_num - 1;//�������±�
    while (1) {
        fread(&code_temp, sizeof(unsigned char), 1, infile);// ��ȡһ���ַ����ȵı���

        // �����ȡ��һ���ַ����ȵı���
        for (i = 0; i < 8; i++) {
            // �ɸ�����ֱ��Ҷ�ڵ�����ƥ������Ӧ�ַ�������
            if (code_temp & 128)//128��1000 0000   ��λ����Ǳ��뻺������λ�Ƿ�Ϊ1
                root = huf_tree[root].rch;//Ϊ1��root=������
            else
                root = huf_tree[root].lch;//Ϊ0��root=������

            if (root < n)//0��n-1����������Ϊ-1
            {
                fwrite(&huf_tree[root].ch, sizeof(unsigned char), 1, outfile);
                writen_len++;//�ѱ����ַ���һ
                if (writen_len == flength) break;// �����ļ����ȣ������ڲ�ѭ��
                root = node_num - 1;// ��λΪ��������ƥ����һ���ַ�
            }
            code_temp <<= 1;// �����뻺�����һλ�Ƶ����λ���ṩƥ��
        }
        if (writen_len == flength) break;//�������ѭ��
    }

    //�ر��ļ�
    fclose(infile);
    fclose(outfile);
    return 1;
}//extract()