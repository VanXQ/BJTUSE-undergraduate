//wanxingquan 20301174 task2 
#include <stdio.h>
#include <stdlib.h>
struct car{
  char number[10];
  int mils;
  int gallon;
};
//�������ݽṹ 
int read(struct car p1[5]);
int report(struct car p2[5]);
//����ԭ�� 
int main()
{
    struct car record[5];		
	//�������� 
    read(record);
    report(record);
    //���ú��� 
    return 0;
}
int read(struct car p1[5])
{
    int i = 0,n=0;
    //���ļ� 
    FILE *fp;
    if((fp = fopen("record.txt","r"))==NULL)
    {
        printf("File open error\n");
        exit(0);
    }
    //��ȡ�ļ����� 
    for(;i<5;i++)
    {
        fscanf(fp,"%s %d %d",&p1[i].number,&p1[i].mils,&p1[i].gallon);
    }
    return 0;
}
//����read���� 
int report(struct car p2[5])
{
    int i = 0, n = 0;
    double Amiles[5],average,sum=0;
    printf("Car number    Miles driven per gallon    \n");
    //ÿ������ʻӢ��������Ӣ���� 
    for(;i<5;i++)
    {   
        Amiles[i] =(double) p2[i].mils / p2[i].gallon;
        printf("%s      %.2lf\n",p2[i].number,Amiles[i]);
        sum = sum + Amiles[i];
    }
    average = sum/5;
	//���ֵ
    printf("\nThe miles driven per gallon in total is %.2f\n",average);
    return 0;
}
//����report���� 
