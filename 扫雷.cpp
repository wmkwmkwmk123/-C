#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max_heng 8
#define max_lie 8 
#define boomnum 10//存在的问题是算不出9*9内有几个雷 
void jianli(char showmap[max_heng][max_lie],int minemap[max_heng][max_lie])
{int heng;
int lie;
for(heng=0;heng<max_heng;heng++)
{for(lie=0;lie<max_lie;lie++)
{showmap[heng][lie]='*';
}

}
for(heng=0;heng<max_heng;heng++)
{for(lie=0;lie<max_lie;lie++)
{minemap[heng][lie]=0;
}
}
int boom=10;
srand((unsigned int)time(0));
while(boom>0)
{
heng=rand()%max_heng;
lie=rand()%max_lie;
if(minemap[heng][lie]!=0)
{continue;
}
minemap[heng][lie]=1;
boom--;
}
}
void print(char showmap[max_heng][max_lie])
{int sum=0;
	printf("-|012345678\n");
for(int heng=0;heng<max_heng;heng++)
{printf("%d|",sum);
sum=sum+1;
for(int lie=0;lie<max_lie;lie++)
{

printf("%c",showmap[heng][lie]);
}printf("\n");
}
}
void player(char showmap[max_heng][max_lie],int* heng,int* lie)
{
while (1)
{
	printf("请输入您要翻开的位置\n"); 
scanf("%d %d",heng,lie);
if(*heng<0||*heng>=max_heng||*lie<0||*lie>=max_lie)
{printf("您的位置有误，请重新输入\n");
continue;
}
if (showmap[*heng][*lie]!='*')
{printf("这个位置翻开了\n");
continue;
}
break;
}
}
void update(char showmap[max_heng][max_lie],int minemap[max_heng][max_lie],int heng,int lie)
{
int nearboom=0;
{ 
if (minemap[heng - 1][lie - 1] == '1')
        nearboom++;
    if (minemap[heng - 1][lie] == '1')
        nearboom++;    
    if (minemap[heng - 1][lie + 1] == '1')
        nearboom++;
    if (minemap[heng][lie - 1] == '1')
        nearboom++;    
    if (minemap[heng][lie + 1] == '1')
        nearboom++;    
    if (minemap[heng + 1][lie - 1] == '1')
        nearboom++;    
    if (minemap[heng + 1][lie] == '1')
        nearboom++;    
    if (minemap[heng + 1][lie + 1] == '1')
        nearboom++;
}
showmap[heng][lie]=nearboom+'0';
}
void game()
{//建立地图 设置地雷  打印地图 
char showmap[max_heng][max_lie];
int minemap[max_heng][max_lie];
 jianli (showmap,minemap);
 int notboom=0;
 while(1)
 {
 print (showmap);
 //玩家输入 是否踩雷 
 int heng=0; 
 int lie=0;
 player (showmap,&heng,&lie);
 if (minemap[heng][lie]==1)
 {printf("游戏结束\n");
  break;
 }//所有格子走完胜利 
 notboom++;
 if(notboom==max_heng*max_lie-boomnum)
 {printf("你赢了\n");

 break;
 }
 update(showmap,minemap,heng,lie);
 
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
