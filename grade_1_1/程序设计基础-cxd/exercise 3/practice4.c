//20301174 ����ȫ д��2020.10.10.22:50 
#include<stdio.h>
#include<stdlib.h> 
//�����õ��Ŀ� 
int main()
{
	float BMI,weightInPounds,heightInInches;
	int a;
	//�ֱ�����bmi�����ذ�������ߴ�����a�������м��� 
	printf("Please enter the weight in pounds and height in inches\n");
	scanf("%f %f",&weightInPounds,&heightInInches);
	//��������ֵ��������� 
	BMI=weightInPounds*703/heightInInches/heightInInches;
    //�����bmiֵ 
	a=(int)BMI*10;
	BMI=a/10;
	//����һλС�� 
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
	//if���Ѷ�Ӧ�Ľ�����
	printf("\n%.1f",BMI); 
    system("pause"); 
	return 0; 
}  
