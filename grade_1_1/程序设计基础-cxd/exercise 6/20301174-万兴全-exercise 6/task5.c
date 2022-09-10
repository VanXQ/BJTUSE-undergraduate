#include <stdio.h>
#include <stdlib.h>
int multiplie(int a,int b,int *c,int level),good(),wrong();
int main() {
	while (1) {
		int i;
		int correct;
		float percent;
		int digit;
		printf("pick a type of arithmetic problem to study.\n");
		printf("1 means addition problems only, 2 menas subtraction problems only,\n");
		printf("3 means multiplication problems only and 4 means a random mixture of all these types.\n");
		printf("Please enter which problems you want to try.(from 1-4)：");
		scanf("%d",&digit);
		for(i=0; i<10;) {
			if (i == 10)
				break;
			int a,b,c;
			multiple(a,b,&c,digit);
			int answer;
			scanf("%d",&answer);
			if (answer == c) {
				good();
				correct++;
				i++;
			} else {
				wrong();
				i++;
				if (i == 10)
					break;
				while(1) {
					scanf("%d",&answer);
					if (answer != c) {
						wrong();
						i++;
						if(i == 10)
							break;
					}
					if (answer == c) {
						good();
						correct++;
						i++;
						break;
					}
				}
			}
		}
		percent = correct * 1.0 / 10 * 100;
		if (percent>= 75) {
			printf("\nCongratulations, you are ready to go to the next level!\n");
			printf("Next student please!\n");
			printf("-------------------------------------------------------\n");
			i = 0;
			correct= 0;
			continue;
		} else {
			printf("\nPlease ask your teacher for extra help.\n");
			printf("Next student please!\n");
			printf("---------------------------------------\n");
			i = 0;
			correct = 0;
			continue;
		}
	}
	return 0;
}
int multiple(int a,int b,int *c,int digit) {
	int t;
	int d[2];
	int f;
	int x;
	for(t=0; t<2; t++) {
		d[t] = rand()% 10 +1;
	}
	a = d[0];
	b = d[1];
	switch (digit) {                          
	//询问算法
		case (1):
			f = a+b;
			printf("%d + %d = ",a,b);        
			//加法运算
			break;
		case (2):
			f = a-b;                         
			//减法运算
			printf("%d - %d = ",a,b);
			break;
		case (3):                           
		//乘法运算
			f = a*b;
			printf("%d * %d = ",a,b);
			break;
		case (4):                           
		//随机以上三种 混合运算
			x = rand() %3 + 1;
			switch (x) {
				case (1):
					f = a+b;
					printf("%d + %d = ",a,b);
					break;
				case (2):
					f = a-b;
					printf("%d - %d = ",a,b);
					break;
				case (3):
					f = a*b;
					printf("%d * %d = ",a,b);
					break;
			}
			break;
	}
	*c = f;
	return 0;
}

int good() {
	int p;
	p = rand()%4 +1;
	switch (p) {
		case (1):
			printf("Very good!\n");
			break;
		case (2):
			printf("Excellent!\n");
			break;
		case (3):
			printf("Nice work!\n");
			break;
		case (4):
			printf("Keep up the good work!\n");
			break;
	}
	return p;
}
int wrong() {
	int q;
	q = rand()%4 +1;
	switch (q) {
		case (1):
			printf("No. Please try again.\n");
			break;
		case (2):
			printf("Wrong. Try once more.\n");
			break;
		case (3):
			printf("No. Keep trying.\n");
			break;
		case (4):
			printf("Don’t give up!\n");
			break;
	}
	return q;
}
