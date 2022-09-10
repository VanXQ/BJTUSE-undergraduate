//Wan Xingquan 20301174 2020.11.17 exercise3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//�����������������
//����ԭ��
int dice(int i)
{
    int a;
    if(i==1)
        srand(time(NULL));
    //ֻ����һ��
    a=rand()%6+1;
    //ȡ1-6֮��������
    return a;
}

int add(int a,int b,int times[11])
{
    int sum;
    sum=a+b;
    //�����εĺ�
    switch (sum)
    //���д����ļ���
    {
        case 2:
            times[0]++;
            break;
        case 3:
            times[1]++;
            break;
        case 4:
            times[2]++;
            break;
        case 5:
            times[3]++;
            break;
        case 6:
            times[4]++;
            break;
        case 7:
            times[5]++;
            break;
        case 8:
            times[6]++;
            break;
        case 9:
            times[7]++;
            break;
        case 10:
            times[8]++;
            break;
        case 11:
            times[9]++;
            break;
        case 12:
            times[10]++;
            break;

    }
    return 0;
}
int rate (int times[],double rates[] )
{
    int i;
    for(i=0; i<11; i++)
    {
        rates[i] = (double)times [i]/360000 * 100;
        //�����ռ�İٷֱ�
    }
    return 0.0;
}
int main()
{
	int a,b,i=1,n;
	//�������� ����
    int times[11]= {0};
    double rates[11]= {0.0};
    for(n=0; n<360000; n++)
        //����360000��ѭ��
    {
        a = dice(i);
        //�����
        i++;
        //Ϊ��dice�����е�srand����ֻ����һ��
        b = dice(i);
        //�����
        add(a,b,times);
        //����add����
    }
    rate(times,rates);
    //����rate����
    printf("and     times    percentage  \n");
    for(n=0; n<11; n++)
        //������
    {
    	printf("%d     %d        %.2f\n",n+2,times[n],rates[n]);
    }
    return 0;
}


