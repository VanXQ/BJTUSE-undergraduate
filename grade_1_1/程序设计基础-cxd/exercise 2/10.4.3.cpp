
// 4.    ��5�֣�Time ConvertConverting from seconds to hours, minutes and seconds. Write a program that for the total time elapsed, in seconds, since an event and converts the time to hours,minutes and seconds. The time should be displayed as hours:minutes:seconds.// 

#include<stdio.h>
#include<stdlib.h> 
int main()
{
	float u;
	float t;
	float a;
	float v;
	float s;
	//������������// 
	printf("Give the initial velocity and acceleration of an object, and the time that has elapsed, places them in the variables u, t, and a,space between them");
	scanf("%f %f %f",&u,&t,&a);
	//���������������ֱ��Ӧ���ٶȣ�ʱ��ͼ��ٶ�// 
	v=u+a*t;
	s=u*t+a*t*t/2;
	//����������ֵʽ���м���// 
	printf("v��%.1f s��%.1f",v,s);
	//������// 
	system("pause"); 
	//��ͣһ��// 
	return 0;
 } 
 
 
