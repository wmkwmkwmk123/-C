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
{printf("输入有误");
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
//1建立棋盘打印棋盘 
//2玩家落子
//3判断胜负
//4电脑落子
//5判断胜负 
}
int menu()
{printf("************\n");//基本交互 
 printf("***请选择***\n");
 printf("**1开始游戏*\n");
 printf("**2结束游戏*\n");
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
{printf("游戏结束");
return 0;
}
else 
{printf("您的输入有误");
menu();
} 
}
