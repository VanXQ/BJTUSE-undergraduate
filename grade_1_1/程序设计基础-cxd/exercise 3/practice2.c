//20301174 ����ȫ д��2020.10.10.22:15
#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
//�����õ��������� 
int main()
{
	int x,y,distance;
	float z;
	printf("please enter x and y:\n");
	//x��y�ֱ�Ϊ���������ϵ�λ�ƣ�distanceΪ������̾��룬zΪʵ����̾��� 
    scanf("%d %d",&x,&y);
    //����x��y 
	z = sqrt (x*x + y*y);
	//�� 
    distance= (int)(z + 0.5); 
    //�������� 
	printf("the shortest distance is %d",distance);
	//������ 
	system("pause"); 
	return 0; 
}  
