#include "dict.h"
struct dictionary *dict;
//ȫ�ֱ��� 
int wordsNumber; 		
//���ʸ��� 
int loadDictionary(struct dictionary Mydict[1000]) {
	int i = 0,n;
	//���ļ� 
	FILE *fp;
	if((fp = fopen("dictionary.txt","r"))==NULL) {
		printf("Failed opening.\n");
		exit(0);
	}
    //��ȡ�ֵ�
	for(i=0; i<5; i++) {
		fscanf(fp,"%s",Mydict[i].word);
		for(n=0; n<33; n++) {
			fscanf(fp,"%c",&Mydict[i].definition[n]);
		}
	}
    //�ر��ļ� 
	if(fclose(fp)) {
		printf("Failed closing��\n");
	}
	return i;//���ص����� 
}
struct dictionary * lookup(char word[50],struct dictionary Mydict[1000]) {
	int k;
	//�Ƚϣ����ص��ʣ���û�У�����0 
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
//����lookup����
