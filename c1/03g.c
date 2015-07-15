#include <stdio.h>
int main(void)
{
	int n;
	int i,j;
	int hosi = 1;
	int kuu;
	printf("®”“ü—Í-->");
	scanf("%d",&n);
	kuu = n - 1 ;
	for(i = 0;i < n;i++)
	{   
		for(j = 0;j < kuu;j++)
		{ 
			printf(" ");
		}
		
		for(j = 0; j < hosi;j++)
		{
			printf("*");
		}
		printf("\n");
		kuu = kuu - 1;
		hosi = hosi + 2;
	}

	return 0;
}