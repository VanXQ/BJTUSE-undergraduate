
 //2.��5�֣�Odd or EvenWrite a program that for an integer to determines and prints whether it��s odd or even.Hint: Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.// 
#include<stdio.h> 
#include<stdlib.h> 
int main()
{
	int n;
	//���� һ������// 
	scanf("%d",&n);
	//���� һ������// 
	if(n%2==1)
	//�ж�������Ƿ�Ϊ����// 
	printf("Odd");
	//�����������odd// 
	if(n%2==0)
	//�ж�������Ƿ�Ϊż��// 
	printf("Even");
	//��ż�������even// 
	system("pause");
	return 0; 
 } 
