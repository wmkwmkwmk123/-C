#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max_heng 8
#define max_lie 8 
char jianli(char showmap[max_heng][max_lie],int minemap[max_heng][max_lie])
{int heng;
int lie;
for(heng=0;heng<max_heng;heng++)
{for(lie=0;lie<max_lie;lie++)
{showmap[heng][lie]='* ';
}

}
for(heng=0;heng<max_heng;heng++)
{for(lie=0;lie<max_lie;lie++)
{minemap[heng][lie]=0;
}
}
int boom=10;
while(boom>0)
{heng=rand()%max_heng;
lie=rand()%max_lie;
if(minemap[heng][lie]!=0)
{continue;
}
minemap[heng][lie]=1;
boom--;
}

void print(char showmap[max_heng][max_lie])
{
for(int heng=0;heng<max_heng;heng++)
{for(int lie=0;lie<max_lie;lie++)
{printf("%c",showmap[heng][lie]);
}printf("\n");
}
}
void player(char showmap[max_heng][max_lie],int* heng,int* lie)
{int heng=0;
int lie=0;
while (1)
{
scanf("%d %d",&heng,&lie)
if(heng<0||heng>=max_heng||lie<0||lie>=max_lie)
{printf("您的代码有误，请重新输入\n");
continue;
}
else if (showmap[heng][lie]!='*')
{printf("这个位置翻开了");
continue;
}
break;
}
}
void game()
{//建立地图 设置地雷  打印地图 
char showmap[max_heng][max_lie];
char minemap[max_heng]p4[max_lie];
 jianli (showmap,minemap);
 while(1)
 {
 print (showmap);
 //玩家输入 是否踩雷 
 int heng=0;
 int lie=0;
 player (showmap,&heng,&lie);
 if (minemap[heng][lie]==1)
 {printf("游戏结束");
  break;
 }
 //没有踩雷显示数字 
}
}
int menu()
{printf("*****************\n");
 printf("**欢迎来到扫雷***\n");
 printf("**选1开始游戏***\n");
 printf("**选2结束游戏***\n");
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
{printf("拜拜");
return 0;
}
else
{printf("您的输入有误");
}
}
}
