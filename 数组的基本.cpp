#include<stdio.h>
#include<stdlib.h>
int main()
{int a[4]={1,2,3,4};
 int b[]={1,2,3,4};
 int c[4]={1,2,3};
 char d[4]={'a','b','e','v'};
 char e[5]={"abcd"};
 for(int i=0;i<4;i++)
 {
printf("%d  %c  %p\n",a[i],e[i],a[i]);
  }system("pause");
  return 0;
 } 
