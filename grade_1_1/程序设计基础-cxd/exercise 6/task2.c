//Author:wanxingquan 20301174
//Task2
//Time:2020 10 31 15：40 
/*Write a C function named convertTime() that accepts an integer of seconds and the addresses of 3 variables named hours, minute, and sec.

The function is to convert the passed number of seconds into an equivalent number of hours, minutes and seconds, and directly alter the value of the respective variables using their passed addresses.

 Write a main() function and test the function in a complete program.

(Hint: The function convertTime() will hold 4 formal parameters, one is integer, the others are addresses of integer.)*/ 
#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
//声明用到的三个库 
int a,hr,mn,sc;
//声明4个量 
convertTime(a)
{
	hr=a/3600;
	mn=(a-3600*hr)/60;
	sc=a%60;
	printf("%d seconds is the same as %dh %dm %ds",a,hr,mn,sc);
	return hr,mn,sc;
}
//定义函数 
int main()
{
	printf("Please enter the number of seconds:");
	scanf("%d",&a);
	convertTime(a);
    system("pause"); 
	return 0; 
}  
//在main函数里面调试 
