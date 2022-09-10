
// Separating Digits in an IntegerWrite a program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by 4 spaces each. [Hint: Use combinations of integer division and the remainder operation.] For example, if the user types in 42139, the program should print4     2     1     3     9//



#include<stdio.h>
#include<stdlib.h> 
int main()
{
	printf("Enter a five digit number") ; 
	int number;
	int Ten_thousand;
	int thousand;
	int hundred;
	int ten;
	int individual;
	//������������// 
	scanf("%d",&number);//����һ����λ�� // 
	
	Ten_thousand=number/10000%10;
	//��ȡ��λ // 
	thousand=(number/1000)%10;
	//��ȡǧλ // 
	hundred=(number/100)%10;
	//��ȡ��λ // 
	ten=(number/10)%10;
	//��ȡʮλ // 
	individual=number%10;
	//��ȡ��λ // 
	printf("%d    %d    %d    %d    %d",Ten_thousand,thousand,hundred,ten,individual);
	//��� ���// 
	system("pause"); 
	return 0; 
}
