#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{//������ͼ ���õ���  ��ӡ��ͼ 
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
