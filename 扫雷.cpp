#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char jianli(char showmap[max_heng][max_lie],char[max_heng][max_lie])
{
}
void game()
{//建立地图 设置地雷  打印地图 
char showmap[max_heng][max_lie];
char minemap[max_heng]p4[max_lie];
 jianli (showmap,minemap);
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
