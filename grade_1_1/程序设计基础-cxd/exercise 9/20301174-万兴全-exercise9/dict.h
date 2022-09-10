#include <stdio.h>
#include <stdlib.h> 
struct dictionary {
	char word[50];
	char definition[200];
};
//定义结构 
extern struct dictionary *dict;
extern int wordsNumber;
//全局变量声明
int loadDictionary(struct dictionary Mydict[1000]);
struct dictionary *lookup(char word[50],struct dictionary Mydict[1000]);
//声明函数原型 
