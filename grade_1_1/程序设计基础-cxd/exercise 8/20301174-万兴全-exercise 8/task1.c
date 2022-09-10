/*wanxingquan 20301174 task1 20201127*/ 
#include <stdio.h>
#include <stdlib.h>
int playGame(char[]);
int play(char, char[]);
int displayArray(char[]);
int score(char[]);
/*��������ԭ�� */
int main() {
	int i;
	char array[10];		
	/*�������� */
	for ( i = 0; i < 10; i++) {
		array[i] = (char) ( '1' + i );
		array[9] = '\0';
	}
	/*�������� */
	playGame(array);		
	/*���ú��� */
	return 0;
}
int displayArray(char array[]) {
	int i;
	for(i=0; i<9;) {
		printf(" %c   ",array[i]);
		i++;
		if(i%3==0) {
			printf("\n\n");
		}
	}
}
/*����displayArray������������� */
int playGame(char array[]) {
	int i,n,j=0;
	char ch;
	displayArray(array);		
	/*��ʾ����*/
	do {
		n = 0;
		/*������ҽ�������*/
		if(j%2==0)
			ch = 'X';
		else
			ch = 'O';
		play(ch,array);		
		/*����play����*/
		j++;
		system("cls");		
		/*�����Ļ*/
		displayArray(array);		
		/*�ٴ���ʾ����*/
		if(((array[0]==array[1]) && (array[1]==array[2])) || ((array[3]==array[4]) && (array[4]==array[5])) || ((array[6]==array[7]) && (array[7]==array[8])) || ((array[0]==array[3]) && (array[3]==array[6])) || ((array[1]==array[4]) && (array[4]==array[7]))||((array[2]==array[5])&&(array[5]==array[8]))||((array[0]==array[4])&&(array[4]==array[8]))||((array[2]==array[4])&&(array[4]==array[6])))
			break;
		for(i=0; i<9; i++) {
			if(array[i]=='X'||array[i]=='O')
				n++;
		}
		/*�ж��Ƿ�ʤ��*/
		if(n==9)
			break;
	} while(1!=0); 
	/*ѭ������, �����������������Լ�ֹͣ2*/
	score(array);
	/*����score����*/
}
/*����playGame����*/
/*����play����*/
int play(char ch,char array[]) {
	int i;
	printf("Player %c, it's your turn, make your move(1-9): ",ch);	

	/*����ѭ��*/
	while(1!=2) {
		scanf("%d",&i);		
		/*��������λ��*/
		/*�ж�λ���Ƿ��Ѿ���ռ�ò���ʾ�û���������*/
		if(array[i-1]=='X'||array[i-1]=='O') {
			printf("This place has been token, please choose again.\n");
		} else
			break;
	}
	array[i-1] = ch;
}

int score (char array[]) {
	int i,n=0;

	/*�ж��Ƿ�Ϊƽ��*/
	for(i=0; i<9; i++) {
		if(array[i]=='X'||array[i]=='O')
			n++;
	}
	if((array[0]=='X'&&array[1]=='X'&&array[2]=='X')||(array[3]=='X'&&array[4]=='X'&&array[5]=='X')||(array[6]=='X'&&array[7]=='X'&&array[8]=='X')||(array[0]=='X'&&array[3]=='X'&&array[6]=='X')||(array[1]=='X'&&array[4]=='X'&&array[7]=='X')||(array[2]=='X'&&array[5]=='X'&&array[8]=='X')||(array[0]=='X'&&array[4]=='X'&&array[8]=='X')||(array[2]=='X'&&array[4]=='X'&&array[6]=='X')) {
		printf("Player X wins!\n");
		/*�ж�X�Ƿ�ʤ��*/
	}
	else if((array[0]=='O'&&array[1]=='O'&&array[2]=='O')||(array[3]=='O'&&array[4]=='O'&&array[5]=='O')||(array[6]=='O'&&array[7]=='O'&&array[8]=='O')||(array[0]=='O'&&array[3]=='O'&&array[6]=='O')||(array[1]=='O'&&array[4]=='O'&&array[7]=='O')||(array[2]=='O'&&array[5]=='O'&&array[8]=='O')||(array[0]=='O'&&array[4]=='O'&&array[8]=='O')||(array[2]=='O'&&array[4]=='O'&&array[6]=='O')) {
		printf("Player O wins!\n");
		/*�ж�O�Ƿ�ʤ��*/
	}
	else if(n==9)
		printf("It's a draw, everybody wins!'");
		/*�ж��Ƿ�Ϊƽ��*/
}
