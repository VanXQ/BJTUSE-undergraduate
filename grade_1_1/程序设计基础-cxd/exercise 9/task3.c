//wanxingquan 20301174 task3 
#include <stdio.h>
#include <stdlib.h>
struct first {
	int marker;		
	char lastname;
	char firstname;
};
struct EMU {
	struct first order[60];
} ;
//定义结构类型
//1代表已被预订，0代表没有人预定
int ShowEmpty(struct EMU[5]);
int ShowAll(struct EMU [5]);
int ShowOne(struct EMU[5]);
int Reserve(struct EMU [5]);
int Delete(struct EMU[5]);
int Save(struct EMU[5]);
//声明函数原型 
int main() {
	//声明变量
	int choice,i,k,m,n;
	struct EMU list[5];

	//将原始的数据都变为0
	for(i=0; i<5; i++) {
		for(k=0; k<60; k++) {
			list[i].order[k].marker=0;
			list[i].order[k].firstname='0';
			list[i].order[k].lastname='0';
		}
	}
	//打开文件
	FILE *fp;
	if((fp=fopen("message.txt","r+"))==NULL) {
		printf("File open error\n");
		exit(0);
	}
	//读取文件数据
	for(m=0; m<5; m++) {
		for(n=0; n<60; n++) {
			fscanf(fp,"%d%c%c",&list[m].order[n].marker,&list[m].order[n].firstname,&list[m].order[n].lastname);
		}
	}
	//进入循环，根据输入者的输入情况调用函数
	do {

		//提示信息
		printf("To choose a function, enter its label:\n");
		printf("1) Show the total number of empty seats.\n");
		printf("2) Show situation of all seat.\n");
		printf("3) Show the information of a seat.\n");
		printf("4) Reserve an empty seat to a customer.\n");
		printf("5) Delete a seat reservation.\n");
		printf("6) Save the current reservations.\n");
		printf("0) Quit.\n");
		//输入选择代号
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				ShowEmpty(list);
				//打印空座位个数
				break;
			case 2:
				ShowAll(list);
				//打印各个座位的预订情况
				break;
			case 3:
				ShowOne(list);
				//打印一个预定信息
				break;
			case 4:
				Reserve(list);
				//预留一个并保存
				break;
			case 5:
				Delete(list);
				//删除一个并保存
				break;
			case 6:
				Save(list);
				//保存
				break;
		}
		//如果输入0，跳出循环
		if(choice==0)
			break;

	} while(choice!=0);
	//关闭文件
	if(fclose(fp)) {
		printf("File close eor\n");
		exit(0);
	}
	return 0;
}
//主函数

int ShowEmpty(struct EMU (list[5])) {
	int sum=0,i,k;
	//如果marker为0，sum加一
	for(i=0; i<5; i++) {
		for(k=0; k<60; k++) {
			if(list[i].order[k].marker==0)
				sum++;
		}
	}
	//输出空座位信息
	printf("There are %d seats available.\n",sum);
}
//定义ShowEmpty函数
int ShowAll(struct EMU (list[5])) {
	int i,m,k,l;
	//输出各座位预留情况
	for(i=0; i<5; i++) {
		printf("Carriage no.%d. \n",i+1);
		for(m=0; m<60; m++) {
			printf(" %d ",list[i].order[m].marker);
			if((m+1)%6 == 0)
				printf("\n");
		}
	}
}
//定义ShowAll函数
int ShowOne(struct EMU list[5]) {
	int m,n,k,l;
	printf("Which seat in which carriage are you looking for? \n");
	//输入车厢数和座位号
	scanf("%d",&m);
	scanf("%d",&n);
	k = n/6 + 1;
	l = n%6;
	printf("carriage no.%d line %d row %d \n",m,k,l);
	//如果marker为0，则未被预定
	if(list[m-1].order[n-1].marker==0)
		printf("is available\n");
	//如果marker为1，则显示预留信息
	if(list[m-1].order[n-1].marker==1)
		printf("has been booked by %c %c\n",list[m-1].order[n-1].firstname,list[m-1].order[n-1].lastname);
}
//定义ShowOne函数
int Reserve(struct EMU p[5]) {
	int i,m;
	char enter;
	//获取需要预留的座位信息
	printf("Which carriage and seat would you like to reserve: \n");
	scanf("%d",&i);
	scanf("%d",&m);
	//让marker为1
	p[i-1].order[m-1].marker=1;
	printf("first name and last name please\n");
	fflush(stdin);//清空缓冲区
	scanf("%c",&p[i-1].order[m-1].firstname);
	scanf(" %c",&p[i-1].order[m-1].lastname);
	Save(p); //保存信息
}
//定义Reserve函数
int Delete(struct EMU p1[]) {
	int i,m;
	//获得要删除的座位信息
	printf("Which carriage and seat would you like to cancle the reservation: \\n");
	scanf("%d",&i);
	scanf("%d",&m);
	//让marker为0，姓名信息为'0'
	p1[i-1].order[m-1].marker = 0;
	p1[i-1].order[m-1].firstname = '0';
	p1[i-1].order[m-1].lastname = '0';
	printf("You have successfully cancled your reservation\n");
	Save(p1); //保存信息
}
//定义Delete函数
int Save(struct EMU list[5]) {
	int i,m;
	//打开文件
	FILE *fp;
	if((fp=fopen("message.txt","r+"))==NULL) {
		printf("File open error\n");
		exit(0);
	}
	//将信息读入文件
	for(i=0; i<5; i++) {
		for(m=0; m<60; m++) {
			fprintf(fp,"%d%c%c",list[i].order[m].marker,list[i].order[m].firstname,list[i].order[m].lastname);
		}
	}

	//关闭文件
	if(fclose(fp)) {
		printf("File close error\n");
		exit(0);
	}
	printf("Saved!\n");
}
//定义Save函数
