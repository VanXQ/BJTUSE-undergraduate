//20301174 wanxingquan exercise1 2020 11 17 
#include <stdio.h>
#include <stdlib.h>
//����ԭ��
int getUnits(double units[], int members)
{
    int i;
    printf("Please input %d amounts: ", members);
    //��ʾ��Ϣ
    for(i=0;i<5;i++)
        //��ѭ������
    {
        scanf("%lf", &units[i]);
    }
    return 0;
}
int calcAmount(double* prices, double* units, double* amts, int elms)
{
    int i;
    double total=0.0;
    //��������
    for(i=0; i<5; i++)
        //���㲢��ֵ��amts
    {
        amts[i]=prices[i] * units[i];
    }
    printf("Price    Units    Amounts \n");		 
    printf("-----    -----    -------\n");
    for(i=0; i<5; i++)
    {
    printf("%.2f     %.2f     %.2f\n", prices[i], units[i], amts[i]);
    }
    for(i=0; i<5; i++)		
	//����ֵ 
    {
        total+=amts[i];
    }
    printf("\nTotal = %.2f\n", total);
}
//����main����
int main()
{
    double units[5],amts[5];
    //��������
    double prices[5]={9.92, 6.32, 12.63, 5.95, 10.29};
    //��ֵprices����
    getUnits(units, 5);
    //���к���
    calcAmount(prices, units, amts, 5);
    //���к���
    return 0;
}




