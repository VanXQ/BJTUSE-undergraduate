//Author:wanxingquan 20301174
//Task4 
//Time:2020.11.5 
/*calendar*/ 
#define Sunday 0
#define Monday 1
#define Tuesday 2
#define Wednesday 3
#define Thursday 4
#define Friday 5
#define Saturday 6
#include<stdio.h>
#include<stdbool.h>
int enter_year(void);//输入年份函数
_Bool leap_year(int year);//判断是否为闰年函数
void print_calendar(int year); //打印日历函数
void print_month(int month);//打印月份名称函数
int days_num(int year,int month);//返回该月天数函数
void print_week(void);//打印周一到周日
int firstday(int year,int month);//返回该月第一天是周几函数
void print_space(int year,int month);//空格缩进函数
int main()
{
		print_calendar( enter_year() );
	return 0;
}
 
 
int enter_year(void)
//输入年份函数,并返回输入值
{
	printf("please enter the year:");
	int year;
	scanf("%d",&year);
	printf("\n");
	return year;
}
_Bool leap_year(int year)//判断是否为闰年函数
{
	if( (year%400 == 0) || (year%4==0 && year%100!=0) )
		return true;
	else 
		return false;
}
void print_calendar(int year)
//打印年份日历函数
{
	int i;
	int j;
	int count;
	for(i=1; i<=12; i++)
	{
		print_month(i);
		print_week();
		print_space(year,i);
		               
                count=firstday(year,i)+1;
 
		for(j=1; j<=days_num(year,i); j++)
		{
			printf("%-2d  ",j);
			//左对齐,宽度为２ 
                                            
			if( count%7 == 0 && j!=days_num(year,i) )//避免某月最后一天也正好换行
			{
				printf("\n");
                                
								
							
			}	
                        count ++;
		}
                printf("\n");
	}
}
void print_month(int month)
//打印月数名称函数
{
	switch(month) 
	{
		case 1:printf("          JANUARY:\n");
		       break;
		case 2:printf("          FEBRUARY:\n");
		       break;
		case 3:printf("           MARCH:\n");
		       break;
		case 4:printf("           APRIL:\n");
		       break;
		case 5:printf("            MAY:\n");
		       break;
		case 6:printf("            JUNE:\n");
		       break;
		case 7:printf("            JULY:\n");
		       break;
		case 8:printf("           AUGUST:\n");
		       break;
		case 9:printf("          SEPTMBER:\n");
		       break;
		case 10:printf("         OCTOBER:\n");
		       break;
		case 11:printf("         NOVEMBER:\n");
		       break;
		case 12:printf("         DECEMBER:\n");
		       break;
		default : 
		       break;
	}
}
int days_num(int year,int month)
//返回该月天数函数
{
	switch(month)
	{
		case 2:if( leap_year(year) )
		       {
		       		return 29;	
		       }
		       else 
			       return 28;
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 4:
		case 6:
		case 9:
	        case 11:
			return 30;
			break;
		default : 
			break;
	}
 
}
void print_week(void)//打印周日到周一
{
	printf("Mo  Tu  We  Th  Fr  Sa  Su \n");
}
 
int firstday(int year,int month)//该月第一天是周几函数
{
	if(month==1 || month==2)//判断是否为1、2月
	{
		year--;
		month+=12;
	}
	return ( (1+2*month+3*(month+1)/5+year+year/4-year/100+year/400)%7 );
	//0-6 一到日
}
void print_space(int year,int month)
//缩空格 
{
	int i=0;
	while(i<firstday(year,month))
	{
		printf("    ");
                i++;
	}
}
 
 
