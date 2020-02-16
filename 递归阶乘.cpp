#include<stdio.h>
int Jiecheng(int num)
{ if(num==1)                    
{return 1;
}return num*Jiecheng(num-1);      
}
int main()
{int num;
printf("输入一个数字\n");
scanf("%d",&num);
printf ("%d",Jiecheng(num));
 
}
