#include<stdio.h>
int main()
{ char a = '\0';
while((a=getchar())!=EOF){//ctrl+z 表示 EOF
	if(a>97&&a<122){continue;// EOF end of file  特殊的字符表示文件结束了
	}//a>9 a<122是 小写英文字符的区间。  
putchar(a);}
system("pause")
}
