/*wanxingquan 20301174 task4 2020 1201*/ 
#include <stdio.h>
#include <stdlib.h> 
int ufunction(char []);
int ifunction(char []);
int rfunction(char []);
/*��������ԭ��*/
int main(int argc,char *argv[])
{
    FILE *fp;
    int i;
    char ch[50];		
	//message.txt
    //���ļ�
    if((fp=fopen("C:\\Users\\Van_XQ\\Desktop\\��ҵ\\20301174-����ȫ-exercise 8\\message.txt","r"))==NULL)
    {
        printf("File open error\n");
        exit(0);
    }
    //��ȡmessage.txt�е���Ϣ
    fgets(ch,50,fp);
    if(argv[1]==(NULL))
    {for(i=0;ch[i]!='\0';i++)
    printf("%c",ch[i]);}
	//�������в��� 
    if(**(argv+1)=='-')
    {
     switch(*(*(argv+1)+1))
       {case 'u':ufunction(ch);//�����в���Ϊ-u
              break;
        case 'i':ifunction(ch);//�����в���Ϊ-i
              break;
        case 'r':rfunction(ch);//�����в���Ϊ-r
              break;
       }
    }

    //��ȷ�ر��ļ�
    if(fclose(fp))
    {
        printf("File close error\n");
        exit(0);
    }

    return 0;		
	//���������� 
}
//���庯��
int ufunction(char ch[])
{
   int i;
   //�����д 
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
  //���Сд 
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
//���庯��
int rfunction(char ch[])
{
   int i,n,j=0,k;
   int num[10]={0};
   n = strlen(ch);
   //������� 
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
