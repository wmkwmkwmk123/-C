#include<stdio.h>
#include<stdlib.h>
int qingwa(int step)
{if (step==1)//跳法有 1 2 3 5 8 13 21 34 种 
{return 1;
}
if (step==2)
{return 2;
}
return qingwa(step-1)+qingwa(step-2);
 } 
 int main ()
 {int step;
 printf("请输入台阶数\n");
 scanf("%d",&step);
 printf("青蛙一共有%d种跳法",qingwa(step));
 system("pause");
 return 0;
 }
