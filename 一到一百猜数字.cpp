#include<stdio.h>
#include<time.h>
#include<stdlib.h>//一部分选项  二部分游戏内容 三部分主函数 
int menu()
{int choice=0;
printf("=================\n");
printf("===是否开始游戏==\n");
printf("====1表示开始====\n");
printf("====0表示结束====\n");
printf("=================\n");
scanf("%d",&choice);
return choice;
 } 
 void game()
 {//1自动生成一个一到一百
 int toguess = rand()% 100 +1;
 // 2玩家猜大小，并且给大小提升 
 while(1){
 printf("请输入你猜的数字"); 
 int num; 
 scanf("%d",&num);
 if(num<toguess){printf("猜小了\n");}
 if(num>toguess){printf("猜大了\n");}
 if(num==toguess){printf("牛批");break;}
 }
}
 int main(){
 	srand(time(0));
 	int choice=menu();
 if(choice==1){game();}//运行game 
 else if (choice==0){printf("游戏结束88\n");}
 else {printf("您的输入有误\n");
 }}
 
 

 
