//exercise5 20301174 wanxingquan 2020 11 18 
#include <stdio.h>
#include <stdlib.h>
//����removeChar���� 
int removeChar(char * string, char ch)
{
    int i,n,k;	
		//��������������� 
    n = sizeof(string);		
	//������ĳ���
    
	//��ĳ��Ԫ��ɾȥ �����Ԫ�ظ�ֵ��ǰ��һ�� 
    for(i=0;string[i]!='\0';i++) 
    {
        if(string[i]==ch)	
			//�ж�����Ԫ���Ƿ����Ҫɾȥ��Ԫ�� 
        {
            for(k=i;k<=100;k++)		
			//�����Ԫ�ظ�ֵ��ǰ���Ԫ�� 
            string[k]=string[k+1];
        }
    }
}
//main���� 
int main()
{
    char message[100],ch;	
		//�������� ���� 
    printf("Please enter some words: \n");		
	//��ʾ��Ϣ 
    gets(message);		
	//����һ���ַ��� 
    printf("What letter would you like to erase: \n");	
		//��ʾ��Ϣ 
    ch = getchar();	
		//����һ���ַ� 
    removeChar(message,ch);	
		//����removeChar���� 
    puts(message);	
		//������ 
    return 0;
}


