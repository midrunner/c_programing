#include <stdio.h>
int main(void)
{
	int n;
	int array[10];
	int total = 0;
	double avg = 0;
	for(n=0 ; n < 10; n++)
	{
		printf("整数[%d]-->",n);
		scanf("%d",array+n);
		total = total + array[n];
		
		
	}
	avg = (double)total / n;
	printf("\n平均(%.1f)以上のデータ\n",avg);
	for(n = 0;n < 10;n++)
	{
		if(array[n] >= avg)
		{
			printf("%d:%d\n",n,array[n]);
		}
	}
	
	return 0;
}