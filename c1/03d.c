#include <stdio.h>
int main()
{	
	int i,j;
	int total= 0;
	for(i = 0;i < 5;i++)
	{
		printf("整数入力-->");
		scanf("%d",&j);
		total = total + j;
	}
	printf("合計:%d\n",total);
	printf("平均:%3.1f\n",(double)total/i);
	return 0;
}