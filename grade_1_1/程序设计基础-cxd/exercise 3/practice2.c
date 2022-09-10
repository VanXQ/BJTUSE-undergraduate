//20301174 万兴全 写于2020.10.10.22:15
#include<stdio.h>
#include<stdlib.h> 
#include<math.h>
//声明用到的三个库 
int main()
{
	int x,y,distance;
	float z;
	printf("please enter x and y:\n");
	//x和y分别为两个方向上的位移，distance为整数最短距离，z为实际最短距离 
    scanf("%d %d",&x,&y);
    //输入x和y 
	z = sqrt (x*x + y*y);
	//算 
    distance= (int)(z + 0.5); 
    //四舍五入 
	printf("the shortest distance is %d",distance);
	//输出结果 
	system("pause"); 
	return 0; 
}  
