#include<stdio.h>
#include<stdlib.h>//a+aa+aaa+aaaa+....=num
int main()
{int a,n;
int num=0;
int tmp=0;
printf("«Î ‰»Îa∫Õn\n") ;
scanf("%d%d",&a,&n);
for(int i=0;i<n;i++)
{
tmp=tmp*10+a;
num=num+tmp; 
}
printf("%d",num);
system("pause");
return 0;
} 
