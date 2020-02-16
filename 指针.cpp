#include<stdio.h>
int main()
{int a=20;
int*p=&a;
printf("%d\n",p);
printf("%d\n",*p);
printf("%d",sizeof(p));
}
