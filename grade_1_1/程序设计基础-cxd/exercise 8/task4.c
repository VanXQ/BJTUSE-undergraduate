/*wanxingquan 20301174 task4 2020 1201*/ 
#include <stdio.h>
#include <stdlib.h> 
int ufunction(char []);
int ifunction(char []);
int rfunction(char []);
/*声明函数原型*/
int main(int argc,char *argv[])
{
    FILE *fp;
    int i;
    char ch[50];		
	//message.txt
    //打开文件
    if((fp=fopen("C:\\Users\\Van_XQ\\Desktop\\作业\\20301174-万兴全-exercise 8\\message.txt","r"))==NULL)
    {
        printf("File open error\n");
        exit(0);
    }
    //读取message.txt中的信息
    fgets(ch,50,fp);
    if(argv[1]==(NULL))
    {for(i=0;ch[i]!='\0';i++)
    printf("%c",ch[i]);}
	//有命令行参数 
    if(**(argv+1)=='-')
    {
     switch(*(*(argv+1)+1))
       {case 'u':ufunction(ch);//命令行参数为-u
              break;
        case 'i':ifunction(ch);//命令行参数为-i
              break;
        case 'r':rfunction(ch);//命令行参数为-r
              break;
       }
    }

    //正确关闭文件
    if(fclose(fp))
    {
        printf("File close error\n");
        exit(0);
    }

    return 0;		
	//主函数结束 
}
//定义函数
int ufunction(char ch[])
{
   int i;
   //输出大写 
   for(i=0;ch[i]!='\0';i++)
        {
            if('a'<=ch[i]&&ch[i]<='z')
            {
                printf("%c",ch[i]-32);
            }
           else
            {
                printf("%c",ch[i]);
            }
        }
}

int ifunction(char ch[])
{
  int i;
  //输出小写 
   for(i=0;ch[i]!='\0';i++)
        {
            if('A'<=ch[i]&&ch[i]<='Z')
            {
                printf("%c",ch[i]+32);
            }
           else
            {
                printf("%c",ch[i]);
            }
        }
}
//定义函数
int rfunction(char ch[])
{
   int i,n,j=0,k;
   int num[10]={0};
   n = strlen(ch);
   //倒序输出 
   for(i=0;ch[i]!='\0';i++)
        {
          if(ch[i]==' ')
          {
             num[j] = i;
             j++;
          }
        }
    printf("later you see");
   for(i=0;i<j;i++)
   {
      for(k=num[j]+1;k<=num[j];k++)
      {
         printf("%c",ch[k]);
      }
   }
}
