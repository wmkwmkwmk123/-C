#include<stdio.h>
#include<windows.h> //弹出对话框先调用windows.h  
void fun(int a,int b){
  	int c=a+b;
  	printf("%d",c);
  }
 int main()
  { while(1){
  
  printf ("wangmengke");
   MessageBox(0,"丑八怪","刘明珠",0); //第一个参数0 依赖的窗口的编号 第二个参数内容 第三个参数标题 第四个参数为窗口类型  
   
}
  // printf("helloworld");
  int a=3;int b=2;
  fun(a,b);
  //printf("%d",c);
   return 0;
  }
  
  
