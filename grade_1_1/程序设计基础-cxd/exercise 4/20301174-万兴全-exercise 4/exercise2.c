//Author:wanxingquan 
//ID:20301174
//Name:task 2
//Time:2020.10.12.18.30
//2. ��10 Points�� Write a program that displays the following prompts :
//Enter a year:
//Enter a month (use a 1 for Jan., 2 for Feb., etc.):
//Your program should accept and store a number in a variable named year in response to the first prompt, and accept and store a number in a variable named month in response to the second prompt.
//The program should calculate the days and store the value in a variable named day in response to the inputted year and month.
//If an invalid month has been entered, the program should inform the user that an invalid month is entered.
/*��Hint:

��1��   The month entered should be between 1 and 12;

��2��   The months January, March, May, July, August, October, and December have 31 days; and all other months have 30 days.

��3��   February has 28 days in a non-leap year, and has 29 days in a leap year.

��4��   To judge a leap year , you can using Boolean expression

( year%4==0 && year%100!=0 ) || ( year%400==0 ) ��*/
//��ע�������и��õĽⷨ�����������ʱ���һ�����switch��䡣�κ�ʱ�䲻����ϣ�������������qaq 
#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
//�����õ��������� 
int main()
{
	int year,month,day;
	//������������ֵ���ֱ��Ӧ�꣬�£��� 
	printf("Enter a year:");
	scanf("%d",&year);
	//������һ����� 
	if((year%4==0&&year%100!=0)||(year%400==0))
	//�ж��ǲ������꣬��������� 
	{
		printf("Please enter a month:");
		scanf("%d",&month);
		//�����·� 
		if(month<=12&&month>0)
		//�ж��·� 
		{
			if(month==2)
			{
				printf("29 days");
			}
			//����Ķ���29�� 
			else if(month==4||month==6||month==9||month==11)
			{
				printf("30 days");
			}
			//С��30�� 
			else
			{
				printf("31 days");
			}
			//ʣ�µ��Ǵ��� ��31�� 
		}
		else
		{
			printf("Tn invalid month is entered.");
		}
		// �������1��12���ھ���ʾ�û����� 
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
		//����ͬ�� 
		else
		{
			printf("Tn invalid month is entered.");
		}
		
	}
    system("pause"); 
	return 0; 
}  
