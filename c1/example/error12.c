#include <stdio.h>

/* 1から50の合計を表示する */
int main(void) 
{
	 int i;
	 int sum = 0;
	 for(i = 1; i <= 50;i++)
	 { 
	 sum = sum + i;
	 }
	 
	 printf("1から50の合計は %d\n", sum);
 return 0;	 
}
