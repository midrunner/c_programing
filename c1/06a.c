#include <stdio.h>
int main(void)
{
	int n;
	printf("®”n‚Ì“ü—Í-->");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("ABC\n");
			break;
		case 2:
			printf("DEF\n");
			break;
		default:
			printf("XXX");
			break;
	}
	
	return 0;
}