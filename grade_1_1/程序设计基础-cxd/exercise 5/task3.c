//Author:wanxingquan 20301174
//Task3
//Time:2020.10.28.20：30 
/*3.  （20 Points）Write a game of Simple Simon in C.*/ 
#define BER 11
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include<windows.h>
//
int i;
int main(void)
{
 	unsigned int seed;
 	int sequence_length=3,turn=1,a[BER],b[BER],grade;
		 grade=time(0);
 	char achar;
 	//定义 变量 
 	for(;turn<=10; turn++) 
 	 {
  	seed=time(NULL);
     	srand(seed);
     	for(i=0;i<=sequence_length-1;++i)
        {
     	 a[i]=rand()%10;
     	 printf("%d",a[i]);
    	}
    	Sleep(1000);
    	printf("\r");
    	for(i=0;i<=sequence_length-1;++i) 
    	{
     	 	printf("? ");
    	}
     	printf("\n");
    	printf("\r");
    	 	i=0;
    	fflush(stdin);
   		while((achar=getchar())!='\n')
  		  		{
      b[i]=(int)(achar-'0');
      i++;
    }
    	for(i=0;i<=sequence_length-1;i++) 
   		{	
    	  	if(b[i]!=a[i]) 
      		{
        		printf("You lose");
       			break;
       		}
     	}
    	if(i==(sequence_length))
    	{
      		printf("U have won ! \n");
      		printf("Do u wanna another try ? \n(enter Y to get another turn N to get the end)\n");
      		achar=getchar();
      		if(achar=='Y') 
       		{
        		if(turn%3==0)
        		sequence_length+=1;
       		}
      		else
      		break;
    	}
    	//循环游戏 
    	else
    	break;
    	//退出循环 
 	}
 	grade=time(0)-grade;
  	printf("\nTime u have won-- %d",turn-1);
 	printf("\nYour score is %d",(int)(grade/turn));
  	system("pause");
  	// 输出结果 
  	return EXIT_SUCCESS;
  	//退出游戏 
}
