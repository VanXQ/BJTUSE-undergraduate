/*wanxingquan 20301174 task2 2020 1128*/
#include <stdio.h>
#include <stdlib.h>
int main() {
	FILE *fp1,*fp2,*fp3;		
	/*定义指针*/
	int a;
	char ch = ' ';
	/*判断文件是否正确*/
	if((fp1=fopen("Exercise_2.txt","r"))==NULL) {
		printf("File open error!\n");
		exit(0);
	}
	if((fp2=fopen("Exercise_2_1.txt","w"))==NULL) {
		printf("File open error!\n");
		exit(0);
	}
	if((fp3=fopen("Exercise_2_2.txt","w"))==NULL) {
		printf("File open error!\n");
		exit(0);
	}
	while(!feof(fp1)) {
		fscanf(fp1,"%d",&a);		
		/*读入数据*/
		
		if(a % 3 ==0) {
			fprintf(fp2,"%d %c",a,ch);

		} else {
			fprintf(fp3,"%d %c",a,ch);
		}
		/*判断能否被3整除，能则并写入文件*/
	}
	/*关文件*/ 
	if(fclose(fp1)) {
		printf("File close error!\n");
		exit(0);
	}
	if(fclose(fp2)) {
		printf("File close error!\n");
		exit(0);
	}
	if(fclose(fp3)) {
		printf("File close error!\n");
		exit(0);
	}
	return 0;
}
