//wanxingquan 20301174  task5 
#include "dict.h"		
//头文件 

int main() {
    //声明变量 
	int k,m,i;
	char ch;		
	//确定是否查单词 
	struct dictionary myDict[1000];		
	//储存单词及解释 
	wordsNumber = loadDictionary(myDict);//调用函数 
	printf("There are %d words in the dictionary.\n",wordsNumber);
	int p;		
	// 0：没有找到
	char word[50];	
	//储存单词 
	
	//输入单词Y or N确定是否查找 
	printf("\nYES OR NO?(INPUT Y OR N)\n");
	scanf("%c",&ch);

    //进入查找单词的循环 
	while(ch=='Y') {
	    
		//输入单词 
		printf("Input a word\n");
		scanf("%s",word);
		//调用lookup函数，返回第几个单词 
		p = lookup(word,myDict);
		switch(p) {
		    //如果是0，表示字典中没有此单词 
			case 0:
				printf("Not found.\n");
				break;
			//如果是其他数字，打印单词和解释 
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
		
		//再次输入Y or N确定是否继续查找 
		printf("\nYES to continue OR NO to exit?(INPUT Y OR N)\n");
		scanf(" %c",&ch);
	}
}
