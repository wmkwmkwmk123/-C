#include<stdio.h>//��abcd�ĳ��ȸ�Ϊ 
#include<stdlib.h>//��a��bcd�ĳ��ȡ�bcd�ĳ��ȸ�Ϊ��b��cd�ĳ��� 
#include<string.h>//d�ĳ��ȸ�Ϊ d�� �����ĳ��� 
int Strlen(char str[])
{if(str[0]=='\0')
{return 0;}
return 1+Strlen(str+1);
}
int main()
{char str[]="wmknbh";
printf("%d",Strlen (str));
system("pause");
}
