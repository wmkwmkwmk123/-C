#include<stdio.h>
#include<stdlib.h>
int qingwa(int step)
{if (step==1)//������ 1 2 3 5 8 13 21 34 �� 
{return 1;
}
if (step==2)
{return 2;
}
return qingwa(step-1)+qingwa(step-2);
 } 
 int main ()
 {int step;
 printf("������̨����\n");
 scanf("%d",&step);
 printf("����һ����%d������",qingwa(step));
 system("pause");
 return 0;
 }
