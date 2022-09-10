//Author:wanxingquan 
//ID:20301174
//Name:task 1
//Time:2020.10.17.15.30
//（10 Points） The area of any triangle with sides a, b, and c can be computed using Heron’s formula area = sqrt((s(s-a)(s-b)(s-c)) where s = (a+b+c)/2
//Using these formulas, write a C program:
//(1) Accept values for the sides a, b, and c form the user’s input.
//(2) Then calculate and display the area for the case where the value of s(s-a)(s-b)(s-c) is positive.
//(3) If the value of the expression s(s-a)(s-b)(s-c) is negative, your program should display a message indicating that the three sides entered do not represent the sides of a triangle.
#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
//声明用到的三个库 
int main()
{
	float a,b,c,s;
	//声明四个量，abc为用户输入的三个值
	printf("Please enter three numbers:");
	scanf("%f %f %f",&a,&b,&c);
	//输入三个数
	s=(a+b+c)/2;
	//算出中间量s
	if (s-a<=0||s-b<=0||s-c<=0)
	{
		printf("The three sides entered do not represent the sides of a triangle.");
	} 
	//判断，如果不符合三边关系定理就说不符合 
	else
	{
		printf("The area of the triangle is %f",sqrt(s*(s-a)*(s-b)*(s-c)));
	}
	//符合三边关系定理，输出结果 
    system("pause"); 
	return 0; 
}  
