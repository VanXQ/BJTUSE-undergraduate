//wanxingquan 20301174  task5 
#include "dict.h"		
//ͷ�ļ� 

int main() {
    //�������� 
	int k,m,i;
	char ch;		
	//ȷ���Ƿ�鵥�� 
	struct dictionary myDict[1000];		
	//���浥�ʼ����� 
	wordsNumber = loadDictionary(myDict);//���ú��� 
	printf("There are %d words in the dictionary.\n",wordsNumber);
	int p;		
	// 0��û���ҵ�
	char word[50];	
	//���浥�� 
	
	//���뵥��Y or Nȷ���Ƿ���� 
	printf("\nYES OR NO?(INPUT Y OR N)\n");
	scanf("%c",&ch);

    //������ҵ��ʵ�ѭ�� 
	while(ch=='Y') {
	    
		//���뵥�� 
		printf("Input a word\n");
		scanf("%s",word);
		//����lookup���������صڼ������� 
		p = lookup(word,myDict);
		switch(p) {
		    //�����0����ʾ�ֵ���û�д˵��� 
			case 0:
				printf("Not found.\n");
				break;
			//������������֣���ӡ���ʺͽ��� 
			case 1:
				printf("%s is:\n",myDict[0].word);
				for(i=0; i<33; i++) {
					printf("%c",myDict[0].definition[i]);
				}
				break;
			case 2:
				printf("%s is:\n",myDict[1].word);
				for(i=0; i<33; i++) {
					printf("%c",myDict[1].definition[i]);
				}
				break;
			case 3:
				printf("%s is:\n",myDict[2].word);
				for(i=0; i<33; i++) {
					printf("%c",myDict[2].definition[i]);
				}
				break;
			case 4:
				printf("%s is:\n",myDict[3].word);
				for(i=0; i<33; i++) {
					printf("%c",myDict[3].definition[i]);
				}
				break;
			case 5:
				printf("%s is:\n",myDict[4].word);
				for(i=0; i<33; i++) {
					printf("%c",myDict[4].definition[i]);
				}
				break;
		}
		
		//�ٴ�����Y or Nȷ���Ƿ�������� 
		printf("\nYES to continue OR NO to exit?(INPUT Y OR N)\n");
		scanf(" %c",&ch);
	}
}
