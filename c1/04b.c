#include <stdio.h>
int main(void)
{
	int i;
	int max;
	scanf("%d",&i);
	max = i;
	while(i >= 0)
	{
		printf("整数入力-->");
		scanf("%d",&i);
		
		if(max < i)
		{
			max = i;
		}
	}
	printf("最大値:%d\n",max);
	
return 0;
}