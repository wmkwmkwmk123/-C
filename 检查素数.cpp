#include<stdio.h>
#include<stdlib.h> 
/*int main()
{
int num,i;
printf("����һ������\n");
scanf("%d",&num);
for (i=2;i<num;i++)
{if(num==2)
{printf("1������");return 0;
}
else if(num%i==0){printf("��������");return 0;}

}
if (i==num) printf("������"); 
} */ 
int sushu(int a)
{int i;
for(i=2;i<a;i++)
{if(a%i==0){printf("��������");break; }
}
if(i==a)printf ("������");
}
int main()
{int num;
scanf("%d",&num) ;
sushu(num);
}
	














