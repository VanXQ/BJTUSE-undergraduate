/*wanxingquan 20301174 task3 2020 1128*/
#include <stdio.h>
#include <stdlib.h>
/*��������ԭ��*/ 
int read(double [4][5]);
int aver1(double [4][5]);
double aver2(double [4][5]);
double maxF(double [4][5]);
int main() {
	double array[4][5],average,max;
	read(array);
	aver1(array);
	average = aver2(array);
	printf("\nThe average of all the number is: %f\n",average);
	max = maxF(array);
	printf("\nThe maximum of all the number is: %f\n",max);
	return 0;
}
/*����read����*/ 
int read (double array[4][5]) {
	FILE *fp;
	int i,n;
	/*���ı��ļ�*/ 
	if((fp=fopen("Exercise_3.txt","r"))==NULL) {
		printf("File open error\n");
		exit(0);
	}
	/*��ȡ���ݵ�����*/ 
	printf("Read data\n");
	for(i=0; i<4; i++) {
		for(n=0; n<5; n++) {
			fscanf(fp,"%lf",&array[i][n]);
			printf("%f  ",array[i][n]);
		}
		printf("\n");
	}
	printf("\n");
	if(fclose(fp)) {
		printf("File close error\n");
		exit(0);
	}
}

/*��ÿ�����ݵ�ƽ��ֵ*/ 
int aver1(double array[4][5]) {
	double sum[4]= {0},average[4];
	int i,n;
	/*��ÿ���ƽ��ֵ*/ 
	for(i=0; i<4; i++) {
		for(n=0; n<5; n++) {
			sum[i] += array[i][n];		
			/*��ÿ�����ݵĺ�*/ 
		}
		average[i] = sum[i] / 5;
		printf("The average of group %d is: %f\n",i+1,average[i]);		
	}
}
double aver2(double array[4][5]) {
	double sum,average;
	int i,n;
	/*���������ݵ�ƽ��ֵ*/ 
	for(i=0; i<4; i++) {
		for(n=0; n<5; n++) {
			sum += array[i][n];		
			/*������ĺ�*/ 
		}
	}
	average = sum / 20;
	return average;		
	/*����ƽ��ֵ*/ 
}
double maxF(double array[4][5]) {
	double a = array[0][0];
	int i,n;
	for(i=0; i<4; i++) {
		for(n=0; n<5; n++) {
			if (a<array[i][n]) {
				a = array[i][n];
				/*������Ԫ�ش�ĸ�ֵ��a*/
			}
		}
	}
	return a;		
	/*�������ֵ*/
}
