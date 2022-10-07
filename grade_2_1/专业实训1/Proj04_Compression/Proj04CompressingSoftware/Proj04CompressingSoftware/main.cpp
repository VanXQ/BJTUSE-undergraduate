//
// Created by Van_XQ on 2021/11/1.
//

#include<iostream>
#include <cstdio>
#include <stdlib.h>
#include <cstring>
#include "header/Extract.h"
using namespace std;

int main()
{

	int n;//��Ч�ֽ�
	HuffNode hufftree[512];//���511�����
	for (int a = 0; a < 512; a++)
	{
		hufftree[a].parent = -1;
		hufftree[a].ch = NULL;
		hufftree[a].count = -1;
		hufftree[a].lch = -1;
		hufftree[a].rch = -1;
	}


	while (1)
	{
		int opt, flag = 0;		// ÿ�ν���ѭ����Ҫ��ʼ��flagΪ0
		char ifname[256];       //����������ļ���������·����
		char ofname[256];		// ������������ļ���
		printf(" =======================================\n");
		printf(" 1 compress              \n");
        printf(" 2 decompress              \n");
        printf(" 3 exit              \n");
        printf(" Enter ur operation:         \n");
        scanf("%d", &opt);
        printf(" =======================================\n");

        if (opt == 3)
			exit(1);
		else
		{
			printf("file name to be compressed:");
			fflush(stdin);	// ��ձ�׼����������ֹ����gets������ȡ�ļ���
			gets(ifname);
			printf("new file name:");
			fflush(stdin);
			gets(ofname);
			
		}
		switch (opt)
		{
		case 1:
		{
			//���ļ����ֽڳ���
			FILE *file;
			file = fopen(ifname, "r");
			fseek(file, SEEK_SET, SEEK_END);
			long flength = ftell(file);
			fclose(file);


			n = Read_File(hufftree, ifname);//��ȡ�ļ��������ֽ�Ƶ�����򣬷�����Ч�ֽڣ�Ƶ�ʲ�Ϊ0��
			creat(hufftree, n);//��������������ָ�뺢�Ӹ��ױ�ʾ��

			creat_hmcode(hufftree, n);//���ɹ���������

//			for (int d = 0; d < 2 * n - 1; d++)//��������
//			{
//				printf("%4d: %4u,   %9d,  %9d,   %9d,  %9d       ", d, hufftree[d].ch, hufftree[d].count, hufftree[d].parent, hufftree[d].lch, hufftree[d].rch);  /* ���ڲ��� */
//
//				for (int f = 0; hufftree[d].bits[f] == '0' || hufftree[d].bits[f] == '1'; f++)
//					printf("%c", hufftree[d].bits[f]);
//				printf("\n");
//			}

			flag = compress(hufftree, n, flength, ifname, ofname);	// ѹ��������ֵ�����ж��Ƿ��ļ���������
			if (flag != -1)
			{
				cout << "\ncompressing, please wait.\n";
			}
//			break;
		}
		case 2:
		{
			flag = extract(hufftree, ifname, ofname);		// ��ѹ������ֵ�����ж��Ƿ��ļ���������
			
			if (flag != -1)
			{
				cout << "\nwait,it is being decompressed" << ifname << " is being decompressed\n";

            }
//			break;
		}


		if (flag == -1)
			printf("\nSorry, file \"%s\" does not exit.\n", ifname);// �����־Ϊ��-1���������ļ�������
		else
			printf("\nsucceed!\n");		// �������
		}
        getchar();

		return 0;

	}


}