#include <stdio.h>
int main(void)
{
	int i;
	int ten;
	int total= 0;
	double ave;
	for(i = 1; i <= 5  ; i++)
	{
		do
		{
			printf("%dl–Ú“_”“ü—Í-->",i);
			scanf("%d",&ten);
		
		}
		while(ten < 0 || ten > 100);
		total = total + ten;
	}
	ave = (double)total / (i-1);
	printf("•½‹Ï:%.1f",ave);
	
	return 0;
} 