//Author:wanxingquan 20301174
//Task
//Time:
/**/ 
#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
to_base_n(char *s,int n,int b)
{
	char bit[]={"0123456789ABCDEF"};
	int len;
	if(n==0)
	{
		strcpy(s,"");
		return;
	}	
	to_base_n(s,n/b,b);
	len=strlen(s);
	s[len]=bit[n%b];
	s[len+1] = '\0';
}
int main()
{
	char s[80];
	int i,base,old;	
	printf("Please enter a decimal number:");
	scanf("%d",&old);
	printf("Please enter the base of the conversion:");
	scanf("%d",&base);
	to_base_n(s,old,base);
	printf("%s\n",s);
	system("pause");
	return 0; 
}


