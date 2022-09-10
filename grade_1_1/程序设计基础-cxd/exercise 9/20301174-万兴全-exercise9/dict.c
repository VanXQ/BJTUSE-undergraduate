#include "dict.h"
struct dictionary *dict;
//全局变量 
int wordsNumber; 		
//单词个数 
int loadDictionary(struct dictionary Mydict[1000]) {
	int i = 0,n;
	//打开文件 
	FILE *fp;
	if((fp = fopen("dictionary.txt","r"))==NULL) {
		printf("Failed opening.\n");
		exit(0);
	}
    //读取字典
	for(i=0; i<5; i++) {
		fscanf(fp,"%s",Mydict[i].word);
		for(n=0; n<33; n++) {
			fscanf(fp,"%c",&Mydict[i].definition[n]);
		}
	}
    //关闭文件 
	if(fclose(fp)) {
		printf("Failed closing。\n");
	}
	return i;//返回单词数 
}
struct dictionary * lookup(char word[50],struct dictionary Mydict[1000]) {
	int k;
	//比较，返回单词；如没有，返回0 
	for(k=0; k<10; k++) {
		if(strcmp(word ,Mydict[k].word)==0) {
			printf("NO. %d words ",k+1);
			return (k+1);
		}
	}
	if(k==10) {
		return 0;
	}
}
//定义lookup函数
