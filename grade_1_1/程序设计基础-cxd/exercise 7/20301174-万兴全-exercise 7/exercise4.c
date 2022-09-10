//exercise4 20301174 wanxingquan 2020 11 18 
#include<stdio.h>
#include<string.h>
#define N 100
int testPalindrome(char*a,int n)
{
	char copy[n];
	strcpy(copy,a);  		
	int i, j, k, r; 
	int valid=n;	
	for(i=0; i<n; i++)		
	//获取有效字节个数 
	{
		if(copy[i]<65 || (copy[i]>90 && copy[i]<97) || copy[i]>122)
			valid--;
	}
	char copy1[valid];		
	//定义用来进行后续运算的数组，元素个数又之前得出 
	for(i=0, k=0; k<valid; i++, k++)		
	//用循环进行运算 
	{
		if(copy[i]<65 || (copy[i]>90 && copy[i]<97) || copy[i]>122)		
		//进行相应位的赋值 
		{
			while(copy[i]<65||(copy[i]>90&&copy[i]<97)||copy[i]>122)
			{i++;} 
			copy1[k]=copy[i];
		} 
		else
		{
			copy1[k]=copy[i];
        }
	}
	for(i=0;i<valid;i++)		
	//大小写转换 
	{
		if(64<copy1[i]&&copy1[i]<91)
		{
			copy1[i]=copy1[i]+32;	
		}
	}
	char copy2[valid];		
	//声明新数组并复制 
	strcpy(copy2, copy1);
	for(i=0, j=valid-1; i<j; i++, j--)		
	//将元素正序和倒序两个两个进行判断 
	{
		char a;
		a=copy1[i];
		copy1[i]=copy1[j];
		copy1[j]=a;
	}
	if(strcmp(copy1,copy2)==0)		
	{
		r=1;
	}
	else
	{
		r=0;
	}
	return r;
}
int main()
{
	int i, result;		
	//声明变量 
	char a[N];
	printf("Please give something, then the programme will tell you wheather it is palindromes: \n");		
	//提示用户输入 
	gets(a);
	for(i=0; a[i]!='\0'; i++);		
	//获取用户输入 
	result=testPalindrome(a,i);		
	//调用判断是否回文的函数 
	if (result==1)		
	//根据函数返回值给出相应反馈 
		printf("It is palindromes.");
	else
		printf("It isn't palindromes");
	return 0;		
	//mian函数结束 
}
