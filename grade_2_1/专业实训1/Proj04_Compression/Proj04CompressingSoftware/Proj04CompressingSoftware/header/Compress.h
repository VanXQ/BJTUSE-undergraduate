//
// Created by Van_XQ on 2021/11/1.
//

#include<iostream>
#include<fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include"HuffmanTree.h"
// ѹ������
int compress(HuffNode huf_tree[], int n,long flength, char *ifname, char *ofname)
{
	FILE * inFile = fopen(ifname, "rb");//��Ҫѹ���ļ�
	FILE * outFile = fopen(ofname, "wb");//��ѹ�����ļ�

	unsigned char temp='\0';            //8bit��ʱ�ı���

	char buffer[256] = "\0";           //������

	char tou[20];                     //�ļ���׺���ַ�����
	int z = 0;
	int strLen = strlen(ifname);//�ļ���׺������
	for (int g = strLen - 1; g>0; g--)//��ȡ�ļ���׺�����Ӻ����ȡ��
	{
		if (ifname[g] == '.')//��ȡ�ļ���׺�����һ����.��
		{
			for (int k = g; k< strLen; k++)
			{
				z++;
				tou[z] = ifname[k];

			}
		}
	}

	tou[0] = z + '0';//��ȡ�ļ���׺������(ת���ַ�)
	fwrite((char *)&tou, sizeof(char), z + 1, outFile);//���ļ�ͷ��
	fwrite(&flength, sizeof(long), 1, outFile);//���ܳ���
	fwrite(&n, sizeof(int), 1, outFile);//���ַ�������

	for (int i = 0; i < n; i++) {//��ÿ����Ŷ�Ӧ���ַ�,Ȩ��
		fwrite(&huf_tree[i].ch, sizeof(unsigned char), 1, outFile);
		fwrite(&huf_tree[i].count, sizeof(long), 1, outFile);
		/*for (int f = 0; huf_tree[i].bits[f] == '0' || huf_tree[i].bits[f] == '1'; f++)
		{
			fwrite(&huf_tree[i].bits[f], sizeof(char), 1, outFile);
		}*/
	}
	

	while (fread(&temp, sizeof(unsigned char), 1, inFile))//�ļ���Ϊ��
	{
		for (int i = 0; i <n; i++)//�Ҷ�Ӧ�ַ�
		{
			if (temp == huf_tree[i].ch)
			{
				for (int f = 0; huf_tree[i].bits[f] == '0' || huf_tree[i].bits[f] == '1'; f++)//���˵���0��1�ı��루��������ı׶ˣ�
				{
					strncat(buffer,&huf_tree[i].bits[f],1);//����������ֵ
				}
			}
				
		}
		while (strlen(buffer) >= 8)//���������ڵ���8��bits����ѭ�� 
		{
			temp = 0;
			for (int i = 0; i < 8; i++)//ÿ8λѭ��һ��
			{
				temp = temp << 1;//����1
				if (buffer[i] == '1')//�����Ϊ1���Ͱ�λΪ1
				{
					temp = temp | 0x01;//�ڲ�Ӱ������λ������£����λ��1
				}
			}
			fwrite(&temp, sizeof(unsigned char), 1, outFile);//д���ļ�
			strcpy(buffer, buffer + 8);//��д���ļ���bitsɾ��
		}
	}
	int m = strlen(buffer);//��ʣ�಻��Ϊ8��bits�ĸ�����l
	if (m) {
		temp = 0;
		for (int i = 0; i < m; i++)
		{
			temp = temp << 1;//�ƶ�1
			if (buffer[i] == '1')//�����Ϊ1���Ͱ�λΪ1
			{
				temp = temp | 0x01;
			}
			
		}
		temp <<= 8 - m;// // �������ֶδ�β���Ƶ��ֽڵĸ�λ
	    fwrite(&temp, sizeof(unsigned char), 1, outFile);//д�����һ��
	}

	fclose(inFile);
	fclose(outFile);

//
//	/*std::fstream infile;
//	unsigned char ch;
//	infile.open(ofname);
//	if (!infile)
//	{
//		std::cout << " ���ļ�ʧ�� " << std::endl;
//
//	}
//
//	while (infile.get((char&)ch))
//	{
//		printf("%c��", ch);
//	}*/

	
   return 1;
}//compress
