#include<stdio.h>
#include<stdlib.h>
#define max_heng 3
#define max_lie 3
void jianli(char qipan[max_heng][max_lie])
{for(int heng=0;heng<max_heng;heng++)
{for(int lie=0;lie<max_lie;lie++)
{char qipan[heng][lie]={' '};
}
}
}
void print (char qipan[max_heng][max_lie])
{for(int heng=0;heng<max_heng;heng++)
{for(int lie=0;lie<max_lie;lie++)
{printf("%c",qipan[heng][lie]);
}
}printf("\n");
}
void player(char qipan[max_heng][max_lie])
{int heng=0;
int lie=0;
scanf("%d %d",&heng,&lie);
while(1){

if(heng<0||heng>=max_heng||lie<0||lie>=max_lie)
{printf("��������");
continue;
}
if(qipan[heng][lie]=='x')
{
	continue;
}
char qipan[heng][lie]={'x'};
}
}
void game()
{char qipan[max_heng][max_lie];
 jianli(qipan);
 print(qipan);
 player(qipan);
//1�������̴�ӡ���� 
//2�������
//3�ж�ʤ��
//4��������
//5�ж�ʤ�� 
}
int menu()
{printf("************\n");//�������� 
 printf("***��ѡ��***\n");
 printf("**1��ʼ��Ϸ*\n");
 printf("**2������Ϸ*\n");
 printf("************\n");
 int choice;
 scanf("%d",&choice);
 return choice;
 } 
 
int main()
{int choice=menu();
if (choice==1)
{game();
}
else if (choice==2)
{printf("��Ϸ����");
return 0;
}
else 
{printf("������������");
menu();
} 
}
