#include<stdio.h>
#include<time.h>
#include<stdlib.h>//һ����ѡ��  ��������Ϸ���� ������������ 
int menu()
{int choice=0;
printf("=================\n");
printf("===�Ƿ�ʼ��Ϸ==\n");
printf("====1��ʾ��ʼ====\n");
printf("====0��ʾ����====\n");
printf("=================\n");
scanf("%d",&choice);
return choice;
 } 
 void game()
 {//1�Զ�����һ��һ��һ��
 int toguess = rand()% 100 +1;
 // 2��Ҳ´�С�����Ҹ���С���� 
 while(1){
 printf("��������µ�����"); 
 int num; 
 scanf("%d",&num);
 if(num<toguess){printf("��С��\n");}
 if(num>toguess){printf("�´���\n");}
 if(num==toguess){printf("ţ��");break;}
 }
}
 int main(){
 	srand(time(0));
 	int choice=menu();
 if(choice==1){game();}//����game 
 else if (choice==0){printf("��Ϸ����88\n");}
 else {printf("������������\n");
 }}
 
 

 
