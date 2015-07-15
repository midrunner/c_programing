#include <stdio.h>
int main(void)
{   int year;
	printf("”N“ü—Í-->");
	scanf("%d",&year);
	if(year % 4 == 0 )
	{
	    if(year % 100 != 0 || year % 400 == 0)
		{
			printf("Œ‹‰Ê:‰[”N");
		}
		else
		{
			printf("Œ‹‰Ê:‰[”N");
		}
	}
	else
	{
		printf("Œ‹‰Ê:•½”N");
	}
	
	return 0;
}