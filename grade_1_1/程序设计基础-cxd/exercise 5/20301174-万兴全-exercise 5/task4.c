//Author:wanxingquan 20301174
//Task
//Time:
/*4. （20 Points）Write a program:

(1) Request the user to enter a positive integer, the integer value should be less than 1000 and more then 0.

(2) Write a function convertIntToWords(int value), which converts the passed value to words, and output the words. For example, 13 results in "one three", and 805 results in "eight nine five".

(3) And then write a new function convertIntToRealWords(int value), which converts the passed value to words as we really say them. For example, 13 would be "thirteen" not "one three", 895 is pronounced "eight hundred ninety five", not "eight nine five" .

(4) Call these two functions in a main() function individually

(5) Test your program with 1, 12,20, 123, 100, 102, 520 as the entered positive integers.

Here is a example executable file translate.rar and the screenshot for your reference [This example program comes from 12301007-何俊毅].*/ 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//声明要用的三个库 
char number_1[20][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
char number_2[8][7]={"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninty"};
//整一堆字符串 好输出 
void convertIntToWords(int a)
{
	int x,y,z;
	if(a>=100)
	{
		printf("It could be read as %s %s %s.\nIt could also be read as ",number_1[a/100],number_1[(a/10)%10],number_1[a%10]);
	}
	else if(a<100&&a>9)
	{
		printf("It could be read as %s %s.\nIt could also be read as ",number_1[a/10],number_1[a%10]);
	}
	else
	{
		printf("It could be read as %s.\nIt could also be read as ",number_1[a]);
	}
}
//定义的第一个函数 
void convertIntToRealWords_1(int a)
{
	int b,d,e;
	b=a/100;
	d=a%100;
	if(b!=0)
	{
		if(d==0)
		{
			convertIntToRealWords_2(b);
			printf(" hundred ");
		}
		else
		{
			convertIntToRealWords_2(b);
			printf(" hundred and ");
		}
	}
	b=a%100;
	if(b!=0)
	{
		convertIntToRealWords_2(b);
	}
}
void convertIntToRealWords_2(int b)
{
	int c,e;
	if(b<=19)
	{
		printf(" %s ",number_1[b]);
	}
	else
	{
		c=b/10;
		printf(" %s",number_2[c-2]);
		c=b%10;
		if(c!=0)
		{
		printf("-%s \n",number_1[c]);
		}
	}
}
//第二第三个函数作为精确读数所需要的函数 
int main()
{
	int a=1;
	while(a)
	{
		printf("\nPlease enter number between 1 and 999,enter 0 to exit:");
		scanf("%d",&a);
		if(a<1||a>999)
		{
			printf("Unaccept number!");
			if(a==0)
			{
				return 0;
			}
		}
		else
		{
			convertIntToWords(a);
			convertIntToRealWords_1(a);
		}
	}
	system("pause");
 	return 0;
}
//利用主函数计算结果 
