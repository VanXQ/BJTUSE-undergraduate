//wanxingquan 20301174  task1 
#include <stdio.h>
#include <stdlib.h>
typedef struct {
	int month;
	int day;
	int year;
} MyDate;
//�������ݽṹ 
int difDays(MyDate * , MyDate *);
void showDate(MyDate );
//����ԭ��
int main() {
	int i;		
	//��¼�������
	MyDate date1,date2;
	printf("Enter two dates(each should looks like MM/DD/YY): \n");
	//������������
	scanf("%d %d %d",&date1.month,&date1.day,&date1.year);
	scanf("%d %d %d",&date2.month,&date2.day,&date2.year);
	i = difDays(&date1,&date2);
	//����difDays����
	printf("There are %d days between",i);		 
	//����������
	showDate(date1);
	//����showDate
	printf(" and ") ;
	showDate(date2);
	return 0;
} 
int difDays(MyDate *d1,MyDate *d2) {
	int sum=0,day[12]= {31,28,31,30,31,30,31,31,30,31,30,31};		 
	//��������
	MyDate d3,d4;			
	//����d3������d4֮ǰ
	//��d3��Ϊ�������ڽ����һ��
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
	//�������·ݶ���ͬ
	else {
		//�������һ��ǰ������
		for(; d3.year<d4.year; d3.year++) {
			day[1] = 28;
			
			if(((d3.year%4==0)&&(d3.year%100!=0))||(d3.year%400==0)) {
				day[1]=29;
			}
			//�ж��Ƿ�Ϊ����
			for(; d3.month <= 12; d3.month++) {
				for(; d3.day<=day[d3.month-1]; d3.day++) {
					sum++;
				}
				d3.day = 1;//��ʼ��day
			}
			d3.month = 1; //��ʼ��month
		}

		
		for(; d3.month<d4.month; d3.month++) {
			for(; d3.day<=day[d3.month-1]; d3.day++) {
				sum++;
			}
			d3.day = 1;
		}
		//�������һ�����һ����ǰ������
		sum = sum + d4.day - 1;
		//����������
	}
	return sum;
}
//����difDays����
void showDate(MyDate Day) {
	printf("%d-%d-%d",Day.year,Day.month,Day.day);
	//��ӡ����
}
//����showDate����
