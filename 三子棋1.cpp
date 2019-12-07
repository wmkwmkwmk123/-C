#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max_heng 3
#define max_lie 3
int isfull(char qipan[max_heng][max_lie])
{for (int heng=0;heng<max_heng;heng++)
{for (int lie=0;lie<max_lie;lie++)
{if (qipan[heng][lie]==' ')
{return 0;
}
}
}return 1;
}
void jianli(char qipan[max_heng][max_lie])
{for(int heng=0;heng<max_heng;heng++)
{for(int lie=0;lie<max_lie;lie++)
{qipan[heng][lie]={' '};
}
}
}
//check检查 
char check(char qipan[max_heng][max_lie])//先检查横行 
{for(int heng=0;heng<max_heng;heng++)
{if (qipan[heng][0]!=' '
&&qipan[heng][0]==qipan[heng][1]
&&qipan[heng][0]==qipan[heng][2])
{return qipan[heng][0];
}
}
for(int lie=0;lie<max_lie;lie++)//检查竖行 
{if (qipan[0][lie]!=' '
&&qipan[0][lie]==qipan[1][lie]
&&qipan[0][lie]==qipan[2][lie])
{return qipan[0][lie];
}
}
if(qipan[0][0]!=' '
&&qipan[0][0]==qipan[1][1]
&&qipan[0][0]==qipan[2][2])
{return qipan[0][0];
}
else if (qipan[0][2]!=' '
&&qipan[0][2]==qipan[1][1]
&&qipan[0][2]==qipan[2][0])
{return qipan[0][2];
}
if (isfull(qipan)==1)//棋盘满了就是和 
{return 'p';
}
return ' ';
}
void print (char qipan[max_heng][max_lie])
{for(int heng=0;heng<max_heng;heng++)

{for(int lie=0;lie<max_lie;lie++)
{
printf("|%c |",qipan[heng][lie]);
}printf("\n");
}
}
void player(char qipan[max_heng][max_lie])
{while(1)
{
printf("请玩家落子\n");
int heng=0;
int lie=0;
scanf("%d %d",&heng,&lie);

if(heng<0||heng>=max_heng||lie<0||lie>=max_lie)
{printf("输入有误");
continue;
}
if(qipan[heng][lie]!=' ')
{ printf("玩家输入有误");
	continue;
}
qipan[heng][lie]={'x'};
break;
}
}

void computer(char qipan[max_heng][max_lie])
{srand((unsigned)time (0));
while(1){

int heng=rand()%3;
int lie=rand()%3;
if(qipan[heng][lie]!=' ')
{
continue;
}
else qipan[heng][lie]='o';
break;
}
}

void game()
{char qipan[max_heng][max_lie];
char winner;
 jianli(qipan);
 while(1)
 {
 print(qipan);
 player(qipan);
 check(qipan);
 computer(qipan);
 check(qipan);
 winner=check(qipan);
 if (winner!=' ')
{break;
}
 continue;
}
if (winner=='x')
{printf("你赢了随机电脑");
}
else if (winner=='o')
{printf("你输给了随机电脑");
}
else printf("你和电脑平局");
}
//1建立棋盘打印棋盘 
//2玩家落子
//3判断胜负
//4电脑落子
//5判断胜负 

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
{
	while(1)
	{
	
int choice=menu();
if (choice==1)
{game();
}
else if (choice==2)
{printf("游戏结束");
return 0;
}
else 
{printf("您的输入有误");
} 
}
}
