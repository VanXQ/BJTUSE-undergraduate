//Author:wanxingquan 20301174
//Task1
//Time:2020.10.20.15��00 
/*1.(10 Points) A child��s parents promised to give the child $10 on her 10th birthday and double the gift on every subsequent birthday until the gift exceeded $1000 (the gift exceeded 1000 is not incuded).

Write a C program to determine how old the girl will be when the last amount is given, and the total amount she received including the last gift.

(Hint: Using while statement for the loop and break statement for the condition controlling.)*/ 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//����Ҫ���õļ����� 
int main()
{
    int age=10,money=10,total_amount;
    //������С�������䣬ÿ�θ���Ǯ�Լ���1000ǰ�����õ��������ֵ 
    while(1)
    {
        age+=1;
        money+=money;
		//�ۼ�һ�֣�����һ�� 
        if(money>1000)
        {
        	age--;
        	money=money/2;
        	break;
        	//��ν�������� ���������˷���ȥû��һǧ��ֵ 
		}
    }
    total_amount=10*(1-pow(2,age-10+1))/(1-2);
    //������͹�ʽ������ 
    printf("The last age is %d and the total money is $%d",age,total_amount);
    //������ս�� 
    system("pause");
    return 0;
}
