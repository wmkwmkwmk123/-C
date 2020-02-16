#include<stdio.h>
#include<stdlib.h> 
int main()
{int num=0;
int n=0;
scanf("%d",&num);
for(int i=num;i;i/=10)
{ n=n*10+i%10;
}
if(num==n)
{printf("是回文数"); 
}
else printf("不是回文数");
system("pause");
return 0;
}
