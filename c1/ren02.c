/* 15JN0127 ren02.c */

#include <stdio.h>

int main(void)
{
 int a,b,c;
 
 printf("数値1入力-->");
 scanf("%d",&a);
 printf("数値2入力-->");
 scanf("%d",&b);
 
 c = a + b;
 
 printf("a=%d:b=%d\n",a,b);
 printf("a + b =%d\n ",c);
 
 return 0;


}