//Author:wanxingquan 
//ID:20301174
//Name:task 4
//Time:2020.10.13.15.45
/*(Optional Part , 5 Points Bonus)��ѡ����+5�֡�Based on the assignment 2. , input the year, month, and day to determine whether the input is a valid date. If valid, the day of the week will be output.��TIPS: January 1, 1900, was a Monday. �����ڵڶ�������ϣ����������գ��ж������Ƿ�Ϊ��Ч���ڣ������Ч����Ӧ�����������ڼ������*/ 
#include<stdlib.h> 
#include<stdio.h>
int main()
{
	int day,mn,yr,i,days=0,s,k;
	//���������������Լ�isk�������� ,��0�쿪ʼ���� 
	int mont[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	//����ÿ���¶�Ӧ���������飬������Ԫ��ǰ�ټ�һ����Ϊ��0�� 
	char wek[][9]=
	{ 
	{'S','u','n','d','a','y'},
	{'M','o','n','d','a','y'},
	{'T','u','e','s','d','a','y'},
	{'W','e','d','n','s','d','a','y'},
	{'T','h','u','r','s','d','a','y'},
	{'F','r','i','d','a','y'},
	{'S','a','t','u','r','d','a','y'}
	};
	//�����ܣ�������Ӧ�ַ��� 
	printf("Input the date (year-month-day):");
	scanf("%d %d %d",&yr,&mn,&day);
	//�����û����������� 
	if(day>0&&(((mn==1||mn==3||mn==5||mn==7||mn==8||mn==10||mn==12)&&day<32)||((mn==4||mn==6||mn==9||mn==11)&&day<31)||((yr%4==0||yr%100==0||yr%400==0)&&mn==2&&day<30)||((yr%4!=0&&yr%100!=0&&yr%400!=0)&&mn==2&&day<29)))
	//�ж��Ƿ�Ϊ�Ϸ����� (�ж������е㳤�� 
	{
		if (yr%4==0||yr%100==0||yr%400==0)
	    {
	        mont[2]=29;
	    }
 	    else
	    {
	        mont[2]=28;
	    }
	    //���������ƽ��Ķ����������⣬���м��㸳ֵ 
	    for (i=0;i<mn;i++)
	    days+=mont[i];
	    days+=day;
     	s=yr-1+(int)((yr-1)/4)-(int)((yr-1)/100)+(int)((yr-1)/400)+days;
    	k=s%7;
    	//�ۼ�;���ù�ʽ�����ÿһ���� 
    	printf("%d-%d-%d is %s.",yr,mn,day,wek[k]);
    }
    else
    {
    	printf("Invalid date");
    	//���������Ч���֪�û�������Ч 
	}
	//������ս�� 
	system("pause"); 
	return 0;

}
//����Ҳ����Ϊ��д��̫�磬�ö��Ƚ�����䶼û���ϣ�switchʲô�ģ������˱��ط�������Ч��������ok�� ��ϣ������̧�����ܸ��� 
