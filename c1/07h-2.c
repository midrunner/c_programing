#include <stdio.h>
int main(void)
{
	int array[8];
	int n ;
	int i ;
	int memory;
	
	for(n = 0; n < 8; n++)
	{
		printf("®”[%d]--->",n);
		scanf("%d",array+n);
		
	}
	printf("\n * *ƒ\[ƒgŒã * *\n");
	
	for(n = 0;n < 8;n++)
	{
		 
		
		for(i = 7; i > n ;i-- )
		{	
			
			if(array[n] > array[i] )    
			{
				memory = array[n];
				array[n] = array[i];
				array[i] = memory;
			}
			
		}
		printf("Œ‹‰Ê[%d]:%d\n",n,array[n]);
		
         
	}
	return 0;
}