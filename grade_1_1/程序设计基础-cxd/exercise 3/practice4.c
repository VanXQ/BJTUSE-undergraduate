//20301174 万兴全 写于2020.10.10.22:50 
#include<stdio.h>
#include<stdlib.h> 
//声明用到的库 
int main()
{
	float BMI,weightInPounds,heightInInches;
	int a;
	//分别声明bmi，体重磅数，身高寸数，a做换算中间量 
	printf("Please enter the weight in pounds and height in inches\n");
	scanf("%f %f",&weightInPounds,&heightInInches);
	//输入两个值，参与计算 
	BMI=weightInPounds*703/heightInInches/heightInInches;
    //计算出bmi值 
	a=(int)BMI*10;
	BMI=a/10;
	//保留一位小数 
	if(BMI<18.5)
	{
		printf("Underweight");
	}
	else if(BMI>=18.5&&BMI<24.95)
	{
		printf("Normal");
	}
	else if(BMI>=24.95&&BMI<29.95)
	{
		printf("Overweight");
	}
	else
	{
		printf("Obese");
	}
	//if语句把对应的结果输出
	printf("\n%.1f",BMI); 
    system("pause"); 
	return 0; 
}  
