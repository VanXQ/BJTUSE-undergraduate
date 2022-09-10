//Author:wanxingquan 
//ID:20301174
//Name:task 3
//Time:2020.10.14.18.30
/*（10 Points） Write a program that reads an English statement from the keyboard and then reports the number of spacesread, the number of uppercase characters read, the number of lowercase characters read, and the number of all other characters read.

【Hint: You can use scanf(“%c”,&aChar); to keep reading characters from keyboard until a new-line character been read 】*/
#include<stdlib.h> 
#include<stdio.h> 
 
int main()
{
 char aChar;
 int thenumberofspacesread=0;
 int thenumberofuppercase=0;
 int thenumberoflowercase=0;
 int thenumberofallother=0;
 //声明各项初始值 
 printf("input an English statement:\n");
 do
 {
  scanf("%c",&aChar);
  //输入字符 
  thenumberofspacesread += 1;
  if (aChar=='a'||aChar=='b'||aChar =='c'||aChar =='d'||aChar=='e'||aChar =='f'||aChar=='g'||
  aChar=='h'||aChar=='i'||aChar=='j'||aChar=='k'||aChar=='l'||aChar=='m'||aChar=='n'||
  aChar=='o'||aChar=='p'||aChar=='q'||aChar=='r'||aChar=='s'||aChar=='t'||aChar=='u'||
  aChar=='v'||aChar=='w'||aChar=='x'||aChar=='y'||aChar=='z')
  thenumberoflowercase  += 1;
  else
  {
      if (aChar=='A'||aChar=='B'||aChar=='C'||aChar=='D'||aChar=='E'||aChar=='F'||aChar=='G'||
   aChar=='H'||aChar=='I'||aChar=='J'||aChar=='K'||aChar=='L'||aChar=='M'||aChar=='N'||
   aChar=='O'||aChar=='P'||aChar=='Q'||aChar=='R'||aChar=='S'||aChar=='T'||aChar=='U'||
   aChar=='V'||aChar=='W'||aChar=='X'||aChar=='Y'||aChar=='Z')
      {
	  thenumberofuppercase+=1;
	  }
      else
      {
      thenumberofallother+=1; 
      }
  }
  //分类并且统计各类字符数量，刷新变量 
 } 
 while
 (aChar!='\n');
 thenumberofspacesread-=1;
    thenumberofallother-=1;
    printf("the number of spacesread=%d\n",thenumberofspacesread);
    printf("the number of uppercase=%d\n",thenumberofuppercase);
    printf("the number of lowercase=%d\n",thenumberoflowercase);
    printf("the number of all other=%d\n",thenumberofallother);
    //输出各项统计结果 
    system("pause"); 
    //暂停一下 
    return 0 ; 
}
//备注：我好像又用了复杂办法。更简单的办法是用ascii码来搞。不过我的算法也可以完解题目 
