#include<stdio.h>
#include<string.h>
int main()
{char str1[]="woyouyitouxiaomaolv"; 
 char str2[]="###################";
 int left=0 ; int right = strlen(str2)-1;
 while(left<=right)
 {str2[left]=str1[left];
 str2[right]=str1[right];
  printf("%s\n",str2);
 left++; right--;
 }
 } 
