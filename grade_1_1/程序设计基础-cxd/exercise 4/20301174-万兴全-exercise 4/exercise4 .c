//Author:wanxingquan 
//ID:20301174
//Name:task 3
//Time:2020.10.18.18.30
/*4. （10 Points） Assume the following:

（1）   Basic pay rate = dollars should be paid per hour,  for example, 10$/hour

（2）   Overtime (in excess of 40 hours per week ) = (Basic pay rate) * 2.5

（3）   Tax rate:

15% of the first $300;

20% of the next $150;

25% of the rest.

Write a program that first presents a menu of pay rates from which to choose:

*****************************************************

Enter the number corresponding to the desired pay rate or action:

1) $8.75/hr             2) $9.33/hr

3) $10.00/hr            4) $11.20/hr

5) quit

******************************************************

Use Scanf(“%d”,&choice) to get the user’s choice, and the use a switch ( choice ) to select the pay rate.

（1）   If choices 1 through 4 are selected, the program should request the hours worked;

（2）   The program should recycle until 5 is entered;

（3）   If something other than choices 1 through 5 is entered, the program should remind the user what the proper choices are and then recycle.

Finally, the program should prints the gross pay, the taxes, and the net pay.

【Hint : Using #define for the various earning rates and tax rates.*/
#include<stdio.h>
#include<stdlib.h>
#define FIRST_CLASS 8.75
#define SECOND_CLASS 9.33
#define THIRD_CLASS 10.00
#define FORTH_CLASS 11.20
#define FIRST_TAX 0.15
#define SECOND_TAX 0.20
#define THIRD_TAX 0.25
//声明各项常量 ,税率以及单价 
int main()
{
    float grosspay;
    float taxes;
    float net_pay;
    char choice;
    float hours;
    //声明各项变量 
    while(1)
	{
        printf("Enter the number corresponding to the desired pay rate or action:\n"
               "\n"
               "1) $%f/hr             2) $%f/hr\n"
               "\n"
               "3) $%f/hr            4) $%f/hr\n"
               "\n"
               "5) quit\n"
               "\n",FIRST_CLASS,SECOND_CLASS,THIRD_CLASS,FORTH_CLASS);
        scanf("%c",&choice);
        //获得用户选择 
        switch (choice)
		{
            case '1':
			//如果用户输入1，就执行第一种税率 。下面三种同理 
			{       
                printf("enter the working time");
                scanf("%f",&hours);
                if(hours>40)
				{
                    grosspay=40*FIRST_CLASS+(hours-40)*2.5*FIRST_CLASS;
                }
                else
				{
                    grosspay=40*FIRST_CLASS;
                }
                if(grosspay<=300)
				{
                    taxes=grosspay*FIRST_TAX;
                }
                else if(grosspay>300&&grosspay<=450)
				{
                    taxes=300*FIRST_TAX+(grosspay-300)*SECOND_TAX;
                }
                else if(grosspay>450)
				{
                    taxes=300*FIRST_TAX+150*SECOND_TAX+(grosspay-450)*THIRD_TAX;
                }
                net_pay=grosspay-taxes;
                printf("the gross pay：$%.2f ；the taxes：$%.2f ；the net pay：$%.2f",grosspay,taxes,net_pay);
                getchar();
                break;
            }
            case '2':
			{
				printf("enter the working time");
                scanf("%f",&hours);
                if(hours>40)
				{
                    grosspay=40*SECOND_CLASS+(hours-40)*2.5*SECOND_CLASS;
                }
                else
				{
                    grosspay=40*SECOND_CLASS;
                }
                if(grosspay<=300)
				{
                    taxes=grosspay*FIRST_TAX;
                }
                else if(grosspay>300&&grosspay<=450)
				{
                    taxes=300*FIRST_TAX+(grosspay-300)*SECOND_TAX;
                }
                else if(grosspay>450)
				{
                    taxes=300*FIRST_TAX+150*SECOND_TAX+(grosspay-450)*THIRD_TAX;
                }
                net_pay=grosspay-taxes;
                printf("the gross pay：$%.2f ；the taxes：$%.2f ；the net pay：$%.2f",grosspay,taxes,net_pay);
                getchar();
                break;
			} 
			case '3':
			{
				printf("enter the working time");
                scanf("%f",&hours);
                if(hours>40)
				{
                    grosspay=40*THIRD_CLASS+(hours-40)*2.5*THIRD_CLASS;
                }
                else
				{
                    grosspay=40*THIRD_CLASS;
                }
                if(grosspay<=300)
				{
                    taxes=grosspay*FIRST_TAX;
                }
                else if(grosspay>300&&grosspay<=450)
				{
                    taxes=300*FIRST_TAX+(grosspay-300)*SECOND_TAX;
                }
                else if(grosspay>450)
				{
                    taxes=300*FIRST_TAX+150*SECOND_TAX+(grosspay-450)*THIRD_TAX;
                }
                net_pay=grosspay-taxes;
                printf("the gross pay：$%.2f ；the taxes：$%.2f ；the net pay：$%.2f",grosspay,taxes,net_pay);
                getchar();
                break;
            } 
            case '4':
			{
				printf("enter the working time");
                scanf("%f",&hours);
                if(hours>40)
				{
                    grosspay=40*FORTH_CLASS+(hours-40)*2.5*FORTH_CLASS;
                }
                else
				{
                    grosspay=40*FORTH_CLASS;
                }
                if(grosspay<=300)
				{
                    taxes=grosspay*FIRST_TAX;
                }
                else if(grosspay>300&&grosspay<=450)
				{
                    taxes=300*FIRST_TAX+(grosspay-300)*SECOND_TAX;
                }
                else if(grosspay>450)
				{
                    taxes=300*FIRST_TAX+150*SECOND_TAX+(grosspay-450)*THIRD_TAX;
                }
                net_pay=grosspay-taxes;
                printf("the gross pay：$%.2f ；the taxes：$%.2f ；the net pay：$%.2f",grosspay,taxes,net_pay);
                getchar();
                break;
            } 
            case '5':
            {
            	return 0;
			}
			//如果用户输入5，直接结束循环，结束程序 
			default:
			{
				break;
			} 
			break;
		
		}
	}
	system("pause");
	return 0;
}
