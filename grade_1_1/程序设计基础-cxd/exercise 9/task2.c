//wanxingquan 20301174 task2 
#include <stdio.h>
#include <stdlib.h>
struct car{
  char number[10];
  int mils;
  int gallon;
};
//声明数据结构 
int read(struct car p1[5]);
int report(struct car p2[5]);
//函数原型 
int main()
{
    struct car record[5];		
	//定义数组 
    read(record);
    report(record);
    //调用函数 
    return 0;
}
int read(struct car p1[5])
{
    int i = 0,n=0;
    //打开文件 
    FILE *fp;
    if((fp = fopen("record.txt","r"))==NULL)
    {
        printf("File open error\n");
        exit(0);
    }
    //读取文件数据 
    for(;i<5;i++)
    {
        fscanf(fp,"%s %d %d",&p1[i].number,&p1[i].mils,&p1[i].gallon);
    }
    return 0;
}
//定义read函数 
int report(struct car p2[5])
{
    int i = 0, n = 0;
    double Amiles[5],average,sum=0;
    printf("Car number    Miles driven per gallon    \n");
    //每加仑行驶英里数和总英里数 
    for(;i<5;i++)
    {   
        Amiles[i] =(double) p2[i].mils / p2[i].gallon;
        printf("%s      %.2lf\n",p2[i].number,Amiles[i]);
        sum = sum + Amiles[i];
    }
    average = sum/5;
	//算均值
    printf("\nThe miles driven per gallon in total is %.2f\n",average);
    return 0;
}
//定义report函数 
