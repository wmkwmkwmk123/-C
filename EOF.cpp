#include<stdio.h>
int main()
{ char a = '\0';
while((a=getchar())!=EOF){//ctrl+z ��ʾ EOF
	if(a>97&&a<122){continue;// EOF end of file  ������ַ���ʾ�ļ�������
	}//a>9 a<122�� СдӢ���ַ������䡣  
putchar(a);}
system("pause")
}
