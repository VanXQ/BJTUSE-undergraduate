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

	int n;//有效字节
	HuffNode hufftree[512];//最多511个结点
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
		int opt, flag = 0;		// 每次进入循环都要初始化flag为0
		char ifname[256];       //保存输入的文件名（包含路径）
		char ofname[256];		// 保存输入输出文件名
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
			fflush(stdin);	// 清空标准输入流，防止干扰gets函数读取文件名
			gets(ifname);
			printf("new file name:");
			fflush(stdin);
			gets(ofname);
			
		}
		switch (opt)
		{
		case 1:
		{
			//求文件总字节长度
			FILE *file;
			file = fopen(ifname, "r");
			fseek(file, SEEK_SET, SEEK_END);
			long flength = ftell(file);
			fclose(file);


			n = Read_File(hufftree, ifname);//读取文件，并按字节频率排序，返回有效字节（频率不为0）
			creat(hufftree, n);//构建哈夫曼仿真指针孩子父亲表示法

			creat_hmcode(hufftree, n);//生成哈夫曼编码

//			for (int d = 0; d < 2 * n - 1; d++)//仅供测试
//			{
//				printf("%4d: %4u,   %9d,  %9d,   %9d,  %9d       ", d, hufftree[d].ch, hufftree[d].count, hufftree[d].parent, hufftree[d].lch, hufftree[d].rch);  /* 用于测试 */
//
//				for (int f = 0; hufftree[d].bits[f] == '0' || hufftree[d].bits[f] == '1'; f++)
//					printf("%c", hufftree[d].bits[f]);
//				printf("\n");
//			}

			flag = compress(hufftree, n, flength, ifname, ofname);	// 压缩，返回值用于判断是否文件名不存在
			if (flag != -1)
			{
				cout << "\ncompressing, please wait.\n";
			}
//			break;
		}
		case 2:
		{
			flag = extract(hufftree, ifname, ofname);		// 解压，返回值用于判断是否文件名不存在
			
			if (flag != -1)
			{
				cout << "\nwait,it is being decompressed" << ifname << " is being decompressed\n";

            }
//			break;
		}


		if (flag == -1)
			printf("\nSorry, file \"%s\" does not exit.\n", ifname);// 如果标志为‘-1’则输入文件不存在
		else
			printf("\nsucceed!\n");		// 操作完成
		}
        getchar();

		return 0;

	}


}