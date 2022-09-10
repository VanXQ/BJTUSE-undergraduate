//exercise5 20301174 wanxingquan 2020 11 18 
#include <stdio.h>
#include <stdlib.h>
//定义removeChar函数 
int removeChar(char * string, char ch)
{
    int i,n,k;	
		//定义变量方便运算 
    n = sizeof(string);		
	//求数组的长度
    
	//将某个元素删去 后面的元素赋值给前面一个 
    for(i=0;string[i]!='\0';i++) 
    {
        if(string[i]==ch)	
			//判断数组元素是否等于要删去的元素 
        {
            for(k=i;k<=100;k++)		
			//后面的元素赋值给前面的元素 
            string[k]=string[k+1];
        }
    }
}
//main函数 
int main()
{
    char message[100],ch;	
		//定义数组 变量 
    printf("Please enter some words: \n");		
	//提示信息 
    gets(message);		
	//输入一个字符串 
    printf("What letter would you like to erase: \n");	
		//提示信息 
    ch = getchar();	
		//输入一个字符 
    removeChar(message,ch);	
		//调用removeChar函数 
    puts(message);	
		//输出结果 
    return 0;
}


