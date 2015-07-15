#include <stdio.h>
int main(void)
{
	int moon;
	printf("ŒŽ‚ð“ü—Í-->");
	scanf("%d",&moon);
	if(moon > 12 || moon < 0)
	{
		printf("ŒŽ‚Ì“ü—ÍƒGƒ‰[");
	}
	else if(moon >= 3 && moon <= 5)
	{
		printf("Œ‹‰Ê:‹Gß‚Ít\n");
	}
	else if(moon >= 6 && moon <= 8)
	{
		printf("Œ‹‰Ê:‹Gß‚Í‰Ä\n");
	}
	else if(moon >= 9 && moon <= 11)
	{
		printf("Œ‹‰Ê:‹Gß‚ÍH\n");
	}
	else
	{
		printf("Œ‹‰Ê:‹Gß‚Í“~\n");
	}
	return 0;
}