//Author:wanxingquan 20301174
//Task2
//Time:2020.10.20.15��30 
/*2.  (10 Points) Calculate the value of �� from the infinite series:
Have the user enter the terms�� limit interactively. You need using for statement for the loop. Print a table that shows the value of �� approximated by one term of this series, by two terms, by three terms, and so on. And output how many terms of this series when you first get 3.14, 3.141, 3.1415, and 3.14159.
(Hint: �C1 times itself an odd number of times is �C1, and �C1 times itself an even number of times is 1; 4/5 result in an integer value 0, so you should use 4.0/5.0 in your program.)*/ 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
//����Ҫʹ�õļ����� 
int main()
{
	float i=0; 
	//��i�� 
	int n=1,k=0;
	//������������������� 
	bool a=true,b=true,c=true,d=true;
	//�����ĸ�����ֵ������ȡ��һ�λ��Ŀ��ֵ��terns 
	while(1)
	{
		if(k%2==0)
		{
			i+=4.0/n;
			k++;
			n+=2;
		}
		else
		{
			i-=4.0/n;
			k++;
			n+=2;
		}
		//�ж���ż��������� 
		if(((int)(i*100)==314)&&a)
		{
			printf("Terms of this series when I first get 3.14 is %d\n",k);
			a=false;
			//��һ��ֵȡ���ϵ����ѭ����������ͬ 
		}
		else if(((int)(i*1000)==3141)&&b)
		{
			printf("Terms of this series when I first get 3.141 is %d\n",k);
			b=false;
		}
		else if(((int)(i*10000)==31415)&&c)
		{
			printf("Terms of this series when I first get 3.1415 is %d\n",k);
			c=false;
		}
		else if(((int)(i*100000)==314159)&&d)
		{
			printf("Terms of this series when I first get 3.14159 is %d\n",k);
			d=false;
		}
		//���������4����� 
		
	}
	system("pause");
	return 0;
}
