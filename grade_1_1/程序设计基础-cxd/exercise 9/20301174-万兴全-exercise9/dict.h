#include <stdio.h>
#include <stdlib.h> 
struct dictionary {
	char word[50];
	char definition[200];
};
//����ṹ 
extern struct dictionary *dict;
extern int wordsNumber;
//ȫ�ֱ�������
int loadDictionary(struct dictionary Mydict[1000]);
struct dictionary *lookup(char word[50],struct dictionary Mydict[1000]);
//��������ԭ�� 
