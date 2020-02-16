#include<stdio.h>
//int main() 
//{int a,b,c;
//scanf("%d",&a);
//b=1,c=1;
//do {c=c*b;b++;
//}while(b<=a);
//	printf("%d",c);
	
//}
int jiecheng(int a)
{int num=1;
for(int i=1;i<=a;i++){num=i*num;
}return num;
 } 
int main()
{ int c;
scanf("%d",&c);
printf("%d",jiecheng(c));
}
