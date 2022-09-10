//Author:wanxingquan 20301174
//Task1
//Time:2020.10.20.15：00 
/*1.(10 Points) A child’s parents promised to give the child $10 on her 10th birthday and double the gift on every subsequent birthday until the gift exceeded $1000 (the gift exceeded 1000 is not incuded).

Write a C program to determine how old the girl will be when the last amount is given, and the total amount she received including the last gift.

(Hint: Using while statement for the loop and break statement for the condition controlling.)*/ 

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//声明要调用的几个库 
int main()
{
    int age=10,money=10,total_amount;
    //先声明小孩的年龄，每次给的钱以及破1000前所有拿到的礼物价值 
    while(1)
    {
        age+=1;
        money+=money;
		//累加一手，翻倍一手 
        if(money>1000)
        {
        	age--;
        	money=money/2;
        	break;
        	//所谓条件控制 。控制完了返回去没破一千的值 
		}
    }
    total_amount=10*(1-pow(2,age-10+1))/(1-2);
    //数列求和公式，麻了 
    printf("The last age is %d and the total money is $%d",age,total_amount);
    //输出最终结果 
    system("pause");
    return 0;
}
