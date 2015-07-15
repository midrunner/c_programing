#include <stdio.h>
int main(void)
{
	int i;
	int max;
	scanf("%d",&i);
	max = i;
	while(i >= 0)
	{
		printf("®”“ü—Í-->");
		scanf("%d",&i);
		
		if(max < i)
		{
			max = i;
		}
	}
	printf("Å‘å’l:%d\n",max);
	
return 0;
}