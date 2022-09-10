/*wanxingquan 20301174 task5 2020 1204*/ 
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 20
int getHolidays(char [][100]);
int display(int,char [][100]);
int sortList(int,char [][100]);
int add(int ,char [][100]);
int del(int ,char [][100]);
//声明函数原型
int main() {
	int length;		
	char ch[MAX][100];		
	length = getHolidays(ch);
	cho(length,ch);	
	return 0;
}
//main函数
int getHolidays(char ch[][100]) {
	int i,length;
	//打开文件
	FILE *fp;
	if((fp=fopen("holidays.txt","r+"))==NULL) {
		printf("File open error");
		exit(0);
	}
	//取出节日信息
	for (i = 0;; i ++) {
		if(feof(fp)) {
			break;
		}
		fgets(ch[i],100,fp);
	}
	length = i;	
	//得到节日个数
	display(i,ch);	
	//显示节日
	return length;		
	//返回节日个数
}
//定义display函数
int display(int length,char ch[][100]) {
	int i;
	//输出所有节日
	for (i=0; i<=length; i++)
		printf("%s",ch[i]);
}

//定义sortList函数
int sortList(int length,char ch[][100]) {
	char n[100];		
	//暂时储存
	int i,j;
	//复制数组
	for(i=0; i<length; i++) {
		for(j=i; j<length-i; j++) {
			if(strcmp(ch[j],ch[j+1])>0) {
				//复制到n数组
				strcpy(n,ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],n);
			}
		}
	}
}

//定义add函数
int add(int length,char ch[][100]) {
	printf("Which one would you like to add: \n");		
	//提示信息
	fflush(stdin);		
	//清除区
	gets(ch[length]);		
	//读取用户添加的节日
	printf("\n");
	strcat(ch[length],"\n");
	//调用函数
	sortList(length,ch);
	display(length,ch);
}

//定义del函数
int del(int length,char ch[][100]) {
	printf("Which one would you like to delete: \n");	//提示信息
	char n[100];
	int i;
	gets(n);		
	//删除的节日
	printf("\n");
	strcat(n,"\n");
	for(i=0; i<=length; i++) {
		if(strcmp(n,ch[i])==0) {
			strcpy(ch[i],"\0");		
			//删除节日
		}
	}
	//调用函数
	sortList(length,ch);
	display(length,ch);
}

//定义cho函数
int cho(int length, char ch[][100]) {
	//进入不终止循环
	while(1!=2) {
		char n[100];
		printf ("\nSelect your move(add,delete,quit): \n") ;
		gets(n);		
		//得到一个字符串
		if(strcmp(n,"add")==0) {
			length ++ ;
			add ( length,ch) ;
		}
		if(strcmp(n,"delete")==0) {
			length -- ;
			del(length,ch);
		}
		if(strcmp(n,"quit")==0) {
			char ch1;	
			//打开文件并写入数据
			FILE* fp1;
			int i;
			printf("Save data(Y/N): \n");
			scanf("%c",&ch1);
			//如果为Y
			if(ch1=='Y'||ch1=='y') {
				fp1=fopen("Holidays.txt","w");
				//输出节日
				for(i=0; i<100; i++) {
					if(ch[length][i]=='\n') {
						ch[length][i]='\0';
					}
				}

				for(i=0; i<=length; i++) {
					fprintf(fp1,"%s",ch[i]);
				}
				//正确关闭文件
				if(fclose(fp1)) {
					printf("File close error\n");
				}
			}
			exit(1);
		}
		length ++ ;
	}
}

