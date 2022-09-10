//Author:wanxingquan 20301174
//Task1
//Time:2020.10.31.15:20
/*1. （10 Points） Euclid’s method for finding the GCD (Greatest Common Divisor, 最大公约数) of two positive integers consists of the following steps:

(1) Divide the larger number by the smaller and retain the remainder.

(2) Divide the smaller number by the remainder, again retaining the remainder.

(3) Continue dividing the prior remainder by the current remainder until the remainder is 0, at which point the last non-0 remainder is the GCD.

For example, assume the two positive integers are 84 and 49, we have:

Step a: 84/49 yields a remainder of 35

Step b: 49/35 yields a remainder of 14

Step c: 35/14 yields a remainder of 7

Step d: 14/7 yields a remainder of 0

Thus, the last non-0 remainder, which is 7, is the GCD of 84 and 49.

Using Euclid’s algorithm, write an actual function that determines and returns the GCD of its two integer parameters, the prototype of the function will looks like:

int getGCD(int, int);

Test the function by passing various data to it in a main() function.*/ 
#include<stdio.h>
#include<stdlib.h> 
//声明用到的2个库 
int  a,b;
//这里给c赋值，让c先不等于0 
int getGCD(int a,int b)
{
	int c=1;
	while(c!=0)
	{
		c=a%b;
		a=b;
		b=c;
		//交换数值，继续运算 
	}
	//辗转相除 
	printf("The GCD of a and b is %d \n",a);
	return a;
 } 
//定义取gcd函数 
int main()
{	
	while(1)
	{
		printf("Please input a and b:\n");
		scanf("%d %d",&a,&b);
		getGCD(a,b);
	}
 	system("pause"); 
	return 0; 
}  
// main函数 传递各种数据来测试该函数
