#include<stdio.h>
#include<stdlib.h>
main()

{ int a[10]={0,12,17,20,25,28,30}; /*a[0]Ϊ������Ԫ����a[1]��ʼ�������*/

int x , i, j=6; /*jΪ����*/

printf("Enter a number:" );

scanf("%d",&x);

a[0]=x;

i=j; /*�����һ����Ԫ��ʼ*/

while(a[i]>x)

{ a[i+1]=a[i]; i--; } /*����x����������ƶ�һ��λ��*/

a[++i]=x;

j++; /*����x��Ԫ���ܸ�������*/

for(i=1;i<=j;i++) printf("%8d",a[i]);

printf("\n");

} 
