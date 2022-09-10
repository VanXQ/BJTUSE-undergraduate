//20301174 万兴全 写于2020.10.10.22:25
#define G 9.81
#define g 1.67
//声明两个常量，G为地球重力，g为月球重力 
#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
//声明用到的库 
int main()
{
	float height;
	// 声明初始高度 
	float heightA,heightB,heightC;
	//声明前三次弹起的高度 
	float speedA,speedB,speedC;
	//声明在地球上前三次的落地速度 
	float speeda,speedb,speedc;
	//声明在月球上前三次的落地速度
	printf("Please enter the initial height:\n");
	scanf("%f",&height);
	//输入初始高度 
	heightA=2*height/3;
	heightB=2*heightA/3;
	heightC=2*heightB/3;
	//计算出前三次弹起高度 
	speedA=sqrt(2*G*height); 
	speedB=sqrt(2*G*heightA);
	speedC=sqrt(2*G*heightB);
	speeda=sqrt(2*g*height);
	speedb=sqrt(2*g*heightA);
	speedc=sqrt(2*g*heightB);
	//计算出速度 
	printf("On earth,the speed of first three bounces is %f,%f,%f;\n",speedA,speedB,speedC);
	printf("on moon,the speed of first three bounces is %f,%f,%f;\n",speeda,speedb,speedc);
	printf("the height of first three bounces is %f,%f,%f",heightA,heightB,heightC);
	//输出结果 
    system("pause"); 
	return 0; 
}  
