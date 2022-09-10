#include<stdio.h> 
#include<stdlib.h> 
int main(void)

{
int work_hours;
int hourly_rate;
double gross_pay;
double net_pay;
int i;
printf("Enter the number of individual");
scanf("%d",&i);
if (i==1)
{hourly_rate=18;
work_hours=35;
}
else
{hourly_rate=10;
work_hours=40;
}
gross_pay=hourly_rate*work_hours;
net_pay=gross_pay*0.88;
printf("\ngross_pay is:%f",gross_pay);
printf("\nnet_pay is:%f",net_pay);
system("pause"); 
return 0;
}
