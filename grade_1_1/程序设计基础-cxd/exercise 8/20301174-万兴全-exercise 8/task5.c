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
//��������ԭ��
int main() {
	int length;		
	char ch[MAX][100];		
	length = getHolidays(ch);
	cho(length,ch);	
	return 0;
}
//main����
int getHolidays(char ch[][100]) {
	int i,length;
	//���ļ�
	FILE *fp;
	if((fp=fopen("holidays.txt","r+"))==NULL) {
		printf("File open error");
		exit(0);
	}
	//ȡ��������Ϣ
	for (i = 0;; i ++) {
		if(feof(fp)) {
			break;
		}
		fgets(ch[i],100,fp);
	}
	length = i;	
	//�õ����ո���
	display(i,ch);	
	//��ʾ����
	return length;		
	//���ؽ��ո���
}
//����display����
int display(int length,char ch[][100]) {
	int i;
	//������н���
	for (i=0; i<=length; i++)
		printf("%s",ch[i]);
}

//����sortList����
int sortList(int length,char ch[][100]) {
	char n[100];		
	//��ʱ����
	int i,j;
	//��������
	for(i=0; i<length; i++) {
		for(j=i; j<length-i; j++) {
			if(strcmp(ch[j],ch[j+1])>0) {
				//���Ƶ�n����
				strcpy(n,ch[j]);
				strcpy(ch[j],ch[j+1]);
				strcpy(ch[j+1],n);
			}
		}
	}
}

//����add����
int add(int length,char ch[][100]) {
	printf("Which one would you like to add: \n");		
	//��ʾ��Ϣ
	fflush(stdin);		
	//�����
	gets(ch[length]);		
	//��ȡ�û���ӵĽ���
	printf("\n");
	strcat(ch[length],"\n");
	//���ú���
	sortList(length,ch);
	display(length,ch);
}

//����del����
int del(int length,char ch[][100]) {
	printf("Which one would you like to delete: \n");	//��ʾ��Ϣ
	char n[100];
	int i;
	gets(n);		
	//ɾ���Ľ���
	printf("\n");
	strcat(n,"\n");
	for(i=0; i<=length; i++) {
		if(strcmp(n,ch[i])==0) {
			strcpy(ch[i],"\0");		
			//ɾ������
		}
	}
	//���ú���
	sortList(length,ch);
	display(length,ch);
}

//����cho����
int cho(int length, char ch[][100]) {
	//���벻��ֹѭ��
	while(1!=2) {
		char n[100];
		printf ("\nSelect your move(add,delete,quit): \n") ;
		gets(n);		
		//�õ�һ���ַ���
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
			//���ļ���д������
			FILE* fp1;
			int i;
			printf("Save data(Y/N): \n");
			scanf("%c",&ch1);
			//���ΪY
			if(ch1=='Y'||ch1=='y') {
				fp1=fopen("Holidays.txt","w");
				//�������
				for(i=0; i<100; i++) {
					if(ch[length][i]=='\n') {
						ch[length][i]='\0';
					}
				}

				for(i=0; i<=length; i++) {
					fprintf(fp1,"%s",ch[i]);
				}
				//��ȷ�ر��ļ�
				if(fclose(fp1)) {
					printf("File close error\n");
				}
			}
			exit(1);
		}
		length ++ ;
	}
}

