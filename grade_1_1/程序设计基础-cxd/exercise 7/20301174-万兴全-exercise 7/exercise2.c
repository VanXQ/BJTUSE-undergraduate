//20301174 wanxingquan 2020 11 18 exercise2 
#include <stdio.h>
#include <stdlib.h>
int copy_arr(double source[], double target[], int length)
{
    int i;
    for(i=0; i<5; i++)
    {
        target[i]=source[i];		//���������е�Ԫ��
    }
    return 0;
}	
int display_array(double target[], int length)
{
    int i;
    printf("element in the array: \n");
    for(i=0; i<5; i++)
    {
        printf("%.1f  ",target[i]);		
		//��������еĸ���Ԫ��
    }
    printf("\n");
    return 0;
}
int sort(double array[],int length)
{
    int i,n;
    double temp;		
	//Ϊ��������ʹ��һ���±��� 
    for(i=0; i<5; i++)
    {
        for(n=0; n<4-i; n++)
        {
            if(array[n]<array[n+1])		
			//����С��һ��Ԫ�ط������ұ� 
            {
                temp = array[n];
                array[n] = array[n+1];
                array[n+1] = temp;

            }
        }
    }
}

int main()
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target [5];
    copy_arr(source, target, 5);
    display_array(target, 5);
    sort(target, 5);
    display_array(source, 5);
    display_array(target, 5);
}


