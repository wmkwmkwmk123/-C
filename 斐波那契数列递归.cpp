#include<stdio.h>
#include<stdlib.h>
int tuzi(int num)
{if(num==1){
return 1;
}
else if(num==2){
	return 1;
}return tuzi(num-2)+tuzi(num-1);
}
int main()
{int num=5;
printf("%d",tuzi(num));
system("pause");
}
