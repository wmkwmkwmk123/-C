#include<stdio.h>
#include<stdlib.h> 
/*int main()
{
int num,i;
printf("输入一个数字\n");
scanf("%d",&num);
for (i=2;i<num;i++)
{if(num==2)
{printf("1是素数");return 0;
}
else if(num%i==0){printf("不是素数");return 0;}

}
if (i==num) printf("是素数"); 
} */ 
int sushu(int a)
{int i;
for(i=2;i<a;i++)
{if(a%i==0){printf("不是素数");break; }
}
if(i==a)printf ("是素数");
}
int main()
{int num;
scanf("%d",&num) ;
sushu(num);
}
	














