#include<stdio.h>
#include<stdlib.h>
int Strlen(char str[])
{int i=0;
while(str[i]!='\0')
{i++;
}return i;
}
int main()
{char str[]="wmknb";
printf("%d\n",Strlen(str));
system("pause");
}
