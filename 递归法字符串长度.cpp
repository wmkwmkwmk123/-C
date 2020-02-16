#include<stdio.h>//求abcd的长度改为 
#include<stdlib.h>//求a和bcd的长度。bcd的长度改为求b和cd的长度 
#include<string.h>//d的长度改为 d和 ‘’的长度 
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
