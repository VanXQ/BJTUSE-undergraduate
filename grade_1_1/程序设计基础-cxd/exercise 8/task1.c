/*wanxingquan 20301174 task1 20201127*/ 
#include <stdio.h>
#include <stdlib.h>
int playGame(char[]);
int play(char, char[]);
int displayArray(char[]);
int score(char[]);
/*声明函数原型 */
int main() {
	int i;
	char array[10];		
	/*定义数组 */
	for ( i = 0; i < 10; i++) {
		array[i] = (char) ( '1' + i );
		array[9] = '\0';
	}
	/*输入数组 */
	playGame(array);		
	/*调用函数 */
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
/*定义displayArray函数，输出棋盘 */
int playGame(char array[]) {
	int i,n,j=0;
	char ch;
	displayArray(array);		
	/*显示棋盘*/
	do {
		n = 0;
		/*两个玩家交替下棋*/
		if(j%2==0)
			ch = 'X';
		else
			ch = 'O';
		play(ch,array);		
		/*调用play函数*/
		j++;
		system("cls");		
		/*清空屏幕*/
		displayArray(array);		
		/*再次显示棋盘*/
		if(((array[0]==array[1]) && (array[1]==array[2])) || ((array[3]==array[4]) && (array[4]==array[5])) || ((array[6]==array[7]) && (array[7]==array[8])) || ((array[0]==array[3]) && (array[3]==array[6])) || ((array[1]==array[4]) && (array[4]==array[7]))||((array[2]==array[5])&&(array[5]==array[8]))||((array[0]==array[4])&&(array[4]==array[8]))||((array[2]==array[4])&&(array[4]==array[6])))
			break;
		for(i=0; i<9; i++) {
			if(array[i]=='X'||array[i]=='O')
				n++;
		}
		/*判断是否胜利*/
		if(n==9)
			break;
	} while(1!=0); 
	/*循环下棋, 不满足上述条件不自己停止2*/
	score(array);
	/*调用score函数*/
}
/*定义playGame函数*/
/*定义play函数*/
int play(char ch,char array[]) {
	int i;
	printf("Player %c, it's your turn, make your move(1-9): ",ch);	

	/*进入循环*/
	while(1!=2) {
		scanf("%d",&i);		
		/*输入下棋位置*/
		/*判断位置是否已经被占用并提示用户重新输入*/
		if(array[i-1]=='X'||array[i-1]=='O') {
			printf("This place has been token, please choose again.\n");
		} else
			break;
	}
	array[i-1] = ch;
}

int score (char array[]) {
	int i,n=0;

	/*判断是否为平局*/
	for(i=0; i<9; i++) {
		if(array[i]=='X'||array[i]=='O')
			n++;
	}
	if((array[0]=='X'&&array[1]=='X'&&array[2]=='X')||(array[3]=='X'&&array[4]=='X'&&array[5]=='X')||(array[6]=='X'&&array[7]=='X'&&array[8]=='X')||(array[0]=='X'&&array[3]=='X'&&array[6]=='X')||(array[1]=='X'&&array[4]=='X'&&array[7]=='X')||(array[2]=='X'&&array[5]=='X'&&array[8]=='X')||(array[0]=='X'&&array[4]=='X'&&array[8]=='X')||(array[2]=='X'&&array[4]=='X'&&array[6]=='X')) {
		printf("Player X wins!\n");
		/*判断X是否胜利*/
	}
	else if((array[0]=='O'&&array[1]=='O'&&array[2]=='O')||(array[3]=='O'&&array[4]=='O'&&array[5]=='O')||(array[6]=='O'&&array[7]=='O'&&array[8]=='O')||(array[0]=='O'&&array[3]=='O'&&array[6]=='O')||(array[1]=='O'&&array[4]=='O'&&array[7]=='O')||(array[2]=='O'&&array[5]=='O'&&array[8]=='O')||(array[0]=='O'&&array[4]=='O'&&array[8]=='O')||(array[2]=='O'&&array[4]=='O'&&array[6]=='O')) {
		printf("Player O wins!\n");
		/*判断O是否胜利*/
	}
	else if(n==9)
		printf("It's a draw, everybody wins!'");
		/*判断是否为平局*/
}
