#include<stdio.h>//����Ķ����Ǳ�4������ 
int main()// ��100���� �ֱ�400����
{int num;
printf("����һ�����\n");
scanf("%d",&num);
if  (num%4==0)  {
if(num%100==0) 
{if(num%400==0)
printf("������");
else printf("��������");
}else printf("������");
}else printf("��������");
}
