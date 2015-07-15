
/* 2~nの整数の中で、素数のみを表示しなさい。
   素数とは、１とその数字以外では割り切れない値である。*/

#include <stdio.h>
int main(void)
{	
	int i,j,n;
	
	printf("整数n-->");
	scanf("%d",&n);
	
	for(i = 2;i < n;i++)
	{
		
		for(j = 2;i % j != 0;j++) /*加算されるjでiが割り切れるまでループ*/
		{
		
		}
		if(j == i)				  /*iを割り切れたjがiと同じ値なら素数*/
		{
			printf(" %d",i);
		}
		
	}
	return 0 ;
}