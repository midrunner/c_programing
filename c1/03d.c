#include <stdio.h>
int main()
{	
	int i,j;
	int total= 0;
	for(i = 0;i < 5;i++)
	{
		printf("êÆêîì¸óÕ-->");
		scanf("%d",&j);
		total = total + j;
	}
	printf("çáåv:%d\n",total);
	printf("ïΩãœ:%3.1f\n",(double)total/i);
	return 0;
}