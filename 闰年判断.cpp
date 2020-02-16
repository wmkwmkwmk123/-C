#include<stdio.h>//闰年的定义是被4整除不 
int main()// 被100整除 又被400整除
{int num;
printf("输入一个年份\n");
scanf("%d",&num);
if  (num%4==0)  {
if(num%100==0) 
{if(num%400==0)
printf("是闰年");
else printf("不是闰年");
}else printf("是闰年");
}else printf("不是闰年");
}
