#include<stdio.h>
void change(int* a,int* b)
{int z;
z=*a;
*a=*b;
*b=z;
}
int main()
{int a=20,b=10;
change(&a,&b);
printf("a=%d\nb=%d\n",a,b);
}
