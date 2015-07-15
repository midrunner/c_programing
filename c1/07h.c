#include <stdio.h>
int main(void)
{
	int n,i;
	int min;
	int rem;
	int array[8];
	for(n=0;n<8;n++)
	{
		printf("®”[%d]-->",n);
		scanf("%d",array+n);
	}
	
	printf("\n* * *ƒ\[ƒgŒã * * *\n");
	for(n = 0; n< 8; n++)
	{
		min = n;
		for(i = n; i < 8;i++)
		{
			if(array[min] > array[i])
			{
				min = i;
				
			}
			
		}
		rem = array[n];
		array[n] = array[min];
		array[min] = rem;
		printf("Œ‹‰Ê[%d]:%d\n",n,array[n]);
		
	
	}
	
	return 0;
}