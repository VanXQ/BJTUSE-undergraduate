
//4.    ��5�֣�Time ConvertConverting from seconds to hours, minutes and seconds. Write a program that for the total time elapsed, in seconds, since an event and converts the time to hours,minutes and seconds. The time should be displayed as hours:minutes:seconds.//

#include<stdio.h>
#include<stdlib.h> 

int main()
{
	int total_time;
	//����һ����ʱ������// 
	int seconds;
	//��������// 
	int minutes;
	//����������// 
	int hours;
	//����Сʱ��// 
	scanf("%d",&total_time);
	//������ʱ��// 
	hours=total_time/3600;
	minutes=(total_time-3600*hours)/60;
	seconds=total_time%60;
	//�ֱ������ʱ���Ӧ��ʱ����// 
	printf("%d hours %d minutes %d seconds ",hours,minutes,seconds);
	//�����Ӧ��ʱ������Ϊ���// 
	system("pause"); 
	//��ͣһ��// 
	return 0;
}
