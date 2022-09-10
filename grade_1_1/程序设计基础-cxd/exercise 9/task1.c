//wanxingquan 20301174  task1 
#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int month;
	int day;
	int year;
} MyDate;
//定义数据结构 
int difDays(MyDate * , MyDate *);
void showDate(MyDate );
//函数原型
int main() {
	int i;		
	//记录相差天数
	MyDate date1,date2;
	printf("Enter two dates(each should looks like MM/DD/YY): \n");
	//输入两个日期
	scanf("%d %d %d",&date1.month,&date1.day,&date1.year);
	scanf("%d %d %d",&date2.month,&date2.day,&date2.year);
	i = difDays(&date1,&date2);
	//调用difDays函数
	printf("There are %d days between",i);		 
	//输出相差天数
	showDate(date1);
	//调用showDate
	printf(" and ") ;
	showDate(date2);
	return 0;
} 
int difDays(MyDate *d1,MyDate *d2) {
	int sum=0,day[12]= {31,28,31,30,31,30,31,31,30,31,30,31};		 
	//声明变量
	MyDate d3,d4;			
	//日期d3在日期d4之前
	//将d3定为两个日期较早的一天
	if(d1->year>d2->year) {
		d3 = *d2;
		d4 = *d1;
	} else if((d1->year == d2->year)&&(d1->month>d2->month)) {
		d3 = *d2;
		d4 = *d1;
	} else if(((d1->year == d2->year)&&(d1->month==d2->month))&&(d1->day>d2->day)) {
		d3 = *d2;
		d4 = *d1;
	} else {
		d3 = *d1;
		d4 = *d2;
	}
	if((d3.year==d4.year)&&(d3.month==d4.month)) {
		sum = d4.day - d3.day;
	}
	//如果年和月份都相同
	else {
		//计算最后一年前的天数
		for(; d3.year<d4.year; d3.year++) {
			day[1] = 28;
			
			if(((d3.year%4==0)&&(d3.year%100!=0))||(d3.year%400==0)) {
				day[1]=29;
			}
			//判断是否为闰年
			for(; d3.month <= 12; d3.month++) {
				for(; d3.day<=day[d3.month-1]; d3.day++) {
					sum++;
				}
				d3.day = 1;//初始化day
			}
			d3.month = 1; //初始化month
		}

		
		for(; d3.month<d4.month; d3.month++) {
			for(; d3.day<=day[d3.month-1]; d3.day++) {
				sum++;
			}
			d3.day = 1;
		}
		//计算最后一年最后一个月前的天数
		sum = sum + d4.day - 1;
		//计算总天数
	}
	return sum;
}
//定义difDays函数
void showDate(MyDate Day) {
	printf("%d-%d-%d",Day.year,Day.month,Day.day);
	//打印日期
}
//定义showDate函数
