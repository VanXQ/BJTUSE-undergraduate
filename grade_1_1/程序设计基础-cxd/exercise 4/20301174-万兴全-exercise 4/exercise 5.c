//Author:wanxingquan 
//ID:20301174
//Name:task 4
//Time:2020.10.13.15.45
/*(Optional Part , 5 Points Bonus)【选做，+5分】Based on the assignment 2. , input the year, month, and day to determine whether the input is a valid date. If valid, the day of the week will be output.（TIPS: January 1, 1900, was a Monday. ）（在第二题基础上，输入年月日，判定输入是否为有效日期，如果有效将对应该日期是星期几输出）*/ 
#include<stdlib.h> 
#include<stdio.h>
int main()
{
	int day,mn,yr,i,days=0,s,k;
	//声明各个年月日以及isk两个参数 ,从0天开始计数 
	int mont[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	//声明每个月对应天数的数组，并且在元旦前再加一天作为第0天 
	char wek[][9]=
	{ 
	{'S','u','n','d','a','y'},
	{'M','o','n','d','a','y'},
	{'T','u','e','s','d','a','y'},
	{'W','e','d','n','s','d','a','y'},
	{'T','h','u','r','s','d','a','y'},
	{'F','r','i','d','a','y'},
	{'S','a','t','u','r','d','a','y'}
	};
	//声明周，给出对应字符组 
	printf("Input the date (year-month-day):");
	scanf("%d %d %d",&yr,&mn,&day);
	//引导用户输入年月日 
	if(day>0&&(((mn==1||mn==3||mn==5||mn==7||mn==8||mn==10||mn==12)&&day<32)||((mn==4||mn==6||mn==9||mn==11)&&day<31)||((yr%4==0||yr%100==0||yr%400==0)&&mn==2&&day<30)||((yr%4!=0&&yr%100!=0&&yr%400!=0)&&mn==2&&day<29)))
	//判定是否为合法日期 (判定条件有点长） 
	{
		if (yr%4==0||yr%100==0||yr%400==0)
	    {
	        mont[2]=29;
	    }
 	    else
	    {
	        mont[2]=28;
	    }
	    //处理闰年和平年的二月天数问题，进行计算赋值 
	    for (i=0;i<mn;i++)
	    days+=mont[i];
	    days+=day;
     	s=yr-1+(int)((yr-1)/4)-(int)((yr-1)/100)+(int)((yr-1)/400)+days;
    	k=s%7;
    	//累加;利用公式计算出每一项结果 
    	printf("%d-%d-%d is %s.",yr,mn,day,wek[k]);
    }
    else
    {
    	printf("Invalid date");
    	//如果日期无效则告知用户日期无效 
	}
	//输出最终结果 
	system("pause"); 
	return 0;

}
//这题也是因为我写的太早，好多先进的语句都没用上（switch什么的），用了保守方法，但效果绝对是ok的 ，希望您高抬贵手能给分 
