//20301174 ����ȫ д��2020.10.10.22:25
#define G 9.81
#define g 1.67
//��������������GΪ����������gΪ�������� 
#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
//�����õ��Ŀ� 
int main()
{
	float height;
	// ������ʼ�߶� 
	float heightA,heightB,heightC;
	//����ǰ���ε���ĸ߶� 
	float speedA,speedB,speedC;
	//�����ڵ�����ǰ���ε�����ٶ� 
	float speeda,speedb,speedc;
	//������������ǰ���ε�����ٶ�
	printf("Please enter the initial height:\n");
	scanf("%f",&height);
	//�����ʼ�߶� 
	heightA=2*height/3;
	heightB=2*heightA/3;
	heightC=2*heightB/3;
	//�����ǰ���ε���߶� 
	speedA=sqrt(2*G*height); 
	speedB=sqrt(2*G*heightA);
	speedC=sqrt(2*G*heightB);
	speeda=sqrt(2*g*height);
	speedb=sqrt(2*g*heightA);
	speedc=sqrt(2*g*heightB);
	//������ٶ� 
	printf("On earth,the speed of first three bounces is %f,%f,%f;\n",speedA,speedB,speedC);
	printf("on moon,the speed of first three bounces is %f,%f,%f;\n",speeda,speedb,speedc);
	printf("the height of first three bounces is %f,%f,%f",heightA,heightB,heightC);
	//������ 
    system("pause"); 
	return 0; 
}  
