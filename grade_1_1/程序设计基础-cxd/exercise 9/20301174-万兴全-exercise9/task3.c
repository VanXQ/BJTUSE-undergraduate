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
//����ṹ����
//1�����ѱ�Ԥ����0����û����Ԥ��
int ShowEmpty(struct EMU[5]);
int ShowAll(struct EMU [5]);
int ShowOne(struct EMU[5]);
int Reserve(struct EMU [5]);
int Delete(struct EMU[5]);
int Save(struct EMU[5]);
//��������ԭ�� 
int main() {
	//��������
	int choice,i,k,m,n;
	struct EMU list[5];

	//��ԭʼ�����ݶ���Ϊ0
	for(i=0; i<5; i++) {
		for(k=0; k<60; k++) {
			list[i].order[k].marker=0;
			list[i].order[k].firstname='0';
			list[i].order[k].lastname='0';
		}
	}
	//���ļ�
	FILE *fp;
	if((fp=fopen("message.txt","r+"))==NULL) {
		printf("File open error\n");
		exit(0);
	}
	//��ȡ�ļ�����
	for(m=0; m<5; m++) {
		for(n=0; n<60; n++) {
			fscanf(fp,"%d%c%c",&list[m].order[n].marker,&list[m].order[n].firstname,&list[m].order[n].lastname);
		}
	}
	//����ѭ�������������ߵ�����������ú���
	do {

		//��ʾ��Ϣ
		printf("To choose a function, enter its label:\n");
		printf("1) Show the total number of empty seats.\n");
		printf("2) Show situation of all seat.\n");
		printf("3) Show the information of a seat.\n");
		printf("4) Reserve an empty seat to a customer.\n");
		printf("5) Delete a seat reservation.\n");
		printf("6) Save the current reservations.\n");
		printf("0) Quit.\n");
		//����ѡ�����
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				ShowEmpty(list);
				//��ӡ����λ����
				break;
			case 2:
				ShowAll(list);
				//��ӡ������λ��Ԥ�����
				break;
			case 3:
				ShowOne(list);
				//��ӡһ��Ԥ����Ϣ
				break;
			case 4:
				Reserve(list);
				//Ԥ��һ��������
				break;
			case 5:
				Delete(list);
				//ɾ��һ��������
				break;
			case 6:
				Save(list);
				//����
				break;
		}
		//�������0������ѭ��
		if(choice==0)
			break;

	} while(choice!=0);
	//�ر��ļ�
	if(fclose(fp)) {
		printf("File close eor\n");
		exit(0);
	}
	return 0;
}
//������

int ShowEmpty(struct EMU (list[5])) {
	int sum=0,i,k;
	//���markerΪ0��sum��һ
	for(i=0; i<5; i++) {
		for(k=0; k<60; k++) {
			if(list[i].order[k].marker==0)
				sum++;
		}
	}
	//�������λ��Ϣ
	printf("There are %d seats available.\n",sum);
}
//����ShowEmpty����
int ShowAll(struct EMU (list[5])) {
	int i,m,k,l;
	//�������λԤ�����
	for(i=0; i<5; i++) {
		printf("Carriage no.%d. \n",i+1);
		for(m=0; m<60; m++) {
			printf(" %d ",list[i].order[m].marker);
			if((m+1)%6 == 0)
				printf("\n");
		}
	}
}
//����ShowAll����
int ShowOne(struct EMU list[5]) {
	int m,n,k,l;
	printf("Which seat in which carriage are you looking for? \n");
	//���복��������λ��
	scanf("%d",&m);
	scanf("%d",&n);
	k = n/6 + 1;
	l = n%6;
	printf("carriage no.%d line %d row %d \n",m,k,l);
	//���markerΪ0����δ��Ԥ��
	if(list[m-1].order[n-1].marker==0)
		printf("is available\n");
	//���markerΪ1������ʾԤ����Ϣ
	if(list[m-1].order[n-1].marker==1)
		printf("has been booked by %c %c\n",list[m-1].order[n-1].firstname,list[m-1].order[n-1].lastname);
}
//����ShowOne����
int Reserve(struct EMU p[5]) {
	int i,m;
	char enter;
	//��ȡ��ҪԤ������λ��Ϣ
	printf("Which carriage and seat would you like to reserve: \n");
	scanf("%d",&i);
	scanf("%d",&m);
	//��markerΪ1
	p[i-1].order[m-1].marker=1;
	printf("first name and last name please\n");
	fflush(stdin);//��ջ�����
	scanf("%c",&p[i-1].order[m-1].firstname);
	scanf(" %c",&p[i-1].order[m-1].lastname);
	Save(p); //������Ϣ
}
//����Reserve����
int Delete(struct EMU p1[]) {
	int i,m;
	//���Ҫɾ������λ��Ϣ
	printf("Which carriage and seat would you like to cancle the reservation: \\n");
	scanf("%d",&i);
	scanf("%d",&m);
	//��markerΪ0��������ϢΪ'0'
	p1[i-1].order[m-1].marker = 0;
	p1[i-1].order[m-1].firstname = '0';
	p1[i-1].order[m-1].lastname = '0';
	printf("You have successfully cancled your reservation\n");
	Save(p1); //������Ϣ
}
//����Delete����
int Save(struct EMU list[5]) {
	int i,m;
	//���ļ�
	FILE *fp;
	if((fp=fopen("message.txt","r+"))==NULL) {
		printf("File open error\n");
		exit(0);
	}
	//����Ϣ�����ļ�
	for(i=0; i<5; i++) {
		for(m=0; m<60; m++) {
			fprintf(fp,"%d%c%c",list[i].order[m].marker,list[i].order[m].firstname,list[i].order[m].lastname);
		}
	}

	//�ر��ļ�
	if(fclose(fp)) {
		printf("File close error\n");
		exit(0);
	}
	printf("Saved!\n");
}
//����Save����
