//Author:wanxingquan 
//ID:20301174
//Name:task 2
//Time:2020.10.12.18.30
//2. （10 Points） Write a program that displays the following prompts :
//Enter a year:
//Enter a month (use a 1 for Jan., 2 for Feb., etc.):
//Your program should accept and store a number in a variable named year in response to the first prompt, and accept and store a number in a variable named month in response to the second prompt.
//The program should calculate the days and store the value in a variable named day in response to the inputted year and month.
//If an invalid month has been entered, the program should inform the user that an invalid month is entered.
/*【Hint:

（1）   The month entered should be between 1 and 12;

（2）   The months January, March, May, July, August, October, and December have 31 days; and all other months have 30 days.

（3）   February has 28 days in a non-leap year, and has 29 days in a leap year.

（4）   To judge a leap year , you can using Boolean expression

( year%4==0 && year%100!=0 ) || ( year%400==0 ) 】*/
//备注：这题有更好的解法，但做这题的时候我还不会switch语句。奈何时间不够，希望批改人能理解qaq 
#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
//声明用到的三个库 
int main()
{
	int year,month,day;
	//声明三个输入值，分别对应年，月，日 
	printf("Enter a year:");
	scanf("%d",&year);
	//先输入一个年份 
	if((year%4==0&&year%100!=0)||(year%400==0))
	//判断是不是闰年，如果是闰年 
	{
		printf("Please enter a month:");
		scanf("%d",&month);
		//输入月份 
		if(month<=12&&month>0)
		//判断月份 
		{
			if(month==2)
			{
				printf("29 days");
			}
			//闰年的二月29天 
			else if(month==4||month==6||month==9||month==11)
			{
				printf("30 days");
			}
			//小月30天 
			else
			{
				printf("31 days");
			}
			//剩下的是大月 ，31天 
		}
		else
		{
			printf("Tn invalid month is entered.");
		}
		// 如果不在1到12以内就提示用户出错 
	}
	else
	{
		printf("Please enter a month:");
		scanf("%d",&month);
		if(month<=12&&month)
		{
			if(month==2)
			{
				printf("28 days");
			}
			else if(month==4||month==6||month==9||month)
			{
				printf("30 days");
			}
			else
			{
				printf("31 days");
			}
		}
		//基本同上 
		else
		{
			printf("Tn invalid month is entered.");
		}
		
	}
    system("pause"); 
	return 0; 
}  
