#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char jianli(char showmap[max_heng][max_lie],char[max_heng][max_lie])
{
}
void game()
{//������ͼ ���õ���  ��ӡ��ͼ 
char showmap[max_heng][max_lie];
char minemap[max_heng]p4[max_lie];
 jianli (showmap,minemap);
}
int menu()
{printf("*****************\n");
 printf("**��ӭ����ɨ��***\n");
 printf("**ѡ1��ʼ��Ϸ***\n");
 printf("**ѡ2������Ϸ***\n");
 printf("****************\n");
 int choice;
 scanf("%d",&choice);
 return choice; 
}
int main()
{
	while(1)
	{
	
int choice=menu();
if(choice==1)
{game();
}
else if(choice==2)
{printf("�ݰ�");
return 0;
}
else
{printf("������������");
}
}
}
