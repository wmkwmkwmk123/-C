#include<stdio.h>
int Jiecheng(int num)
{ if(num==1)                    
{return 1;
}return num*Jiecheng(num-1);      
}
int main()
{int num;
printf("����һ������\n");
scanf("%d",&num);
printf ("%d",Jiecheng(num));
 
}
