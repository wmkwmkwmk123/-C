#include<stdio.h>
int func(int* x)
{*x=*x+1;

}
int main()
{int num=0;
func(&num);
printf("%d",num);
}
