#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max_heng 8
#define max_lie 8 
#define boomnum 10
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
{
for(int heng=0;heng<max_heng;heng++)
{for(int lie=0;lie<max_lie;lie++)
{printf("%c",showmap[heng][lie]);
}printf("\n");
}
}
void player(char showmap[max_heng][max_lie],int* heng,int* lie)
{
while (1)
{
	printf("��������Ҫ������λ��\n"); 
scanf("%d %d",heng,lie);
if(*heng<0||*heng>=max_heng||*lie<0||*lie>=max_lie)
{printf("����λ����������������\n");
continue;
}
if (showmap[*heng][*lie]!='*')
{printf("���λ�÷�����\n");
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
{//������ͼ ���õ���  ��ӡ��ͼ 
char showmap[max_heng][max_lie];
int minemap[max_heng][max_lie];
 jianli (showmap,minemap);
 int notboom=0;
 while(1)
 {
 print (showmap);
 //������� �Ƿ���� 
 int heng=0; 
 int lie=0;
 player (showmap,&heng,&lie);
 if (minemap[heng][lie]==1)
 {printf("��Ϸ����\n");
  break;
 }//���и�������ʤ�� 
 notboom++;
 if(notboom==max_heng*max_lie-boomnum)
 {printf("��Ӯ��\n");

 break;
 }
 update(showmap,minemap,heng,lie);
 
 //û�в�����ʾ���� 
}
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
