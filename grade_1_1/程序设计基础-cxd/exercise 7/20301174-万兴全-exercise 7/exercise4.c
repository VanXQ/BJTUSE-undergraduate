//exercise4 20301174 wanxingquan 2020 11 18 
#include<stdio.h>
#include<string.h>
#define N 100
int testPalindrome(char*a,int n)
{
	char copy[n];
	strcpy(copy,a);  		
	int i, j, k, r; 
	int valid=n;	
	for(i=0; i<n; i++)		
	//��ȡ��Ч�ֽڸ��� 
	{
		if(copy[i]<65 || (copy[i]>90 && copy[i]<97) || copy[i]>122)
			valid--;
	}
	char copy1[valid];		
	//�����������к�����������飬Ԫ�ظ�����֮ǰ�ó� 
	for(i=0, k=0; k<valid; i++, k++)		
	//��ѭ���������� 
	{
		if(copy[i]<65 || (copy[i]>90 && copy[i]<97) || copy[i]>122)		
		//������Ӧλ�ĸ�ֵ 
		{
			while(copy[i]<65||(copy[i]>90&&copy[i]<97)||copy[i]>122)
			{i++;} 
			copy1[k]=copy[i];
		} 
		else
		{
			copy1[k]=copy[i];
        }
	}
	for(i=0;i<valid;i++)		
	//��Сдת�� 
	{
		if(64<copy1[i]&&copy1[i]<91)
		{
			copy1[i]=copy1[i]+32;	
		}
	}
	char copy2[valid];		
	//���������鲢���� 
	strcpy(copy2, copy1);
	for(i=0, j=valid-1; i<j; i++, j--)		
	//��Ԫ������͵����������������ж� 
	{
		char a;
		a=copy1[i];
		copy1[i]=copy1[j];
		copy1[j]=a;
	}
	if(strcmp(copy1,copy2)==0)		
	{
		r=1;
	}
	else
	{
		r=0;
	}
	return r;
}
int main()
{
	int i, result;		
	//�������� 
	char a[N];
	printf("Please give something, then the programme will tell you wheather it is palindromes: \n");		
	//��ʾ�û����� 
	gets(a);
	for(i=0; a[i]!='\0'; i++);		
	//��ȡ�û����� 
	result=testPalindrome(a,i);		
	//�����ж��Ƿ���ĵĺ��� 
	if (result==1)		
	//���ݺ�������ֵ������Ӧ���� 
		printf("It is palindromes.");
	else
		printf("It isn't palindromes");
	return 0;		
	//mian�������� 
}
