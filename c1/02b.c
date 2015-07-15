#include <stdio.h>
int main(void)
{
	int a,b;
	printf("a‚³‚ñ‚Ì“¾“_-->");
	scanf("%d",&a);
	printf("b‚³‚ñ‚Ì“¾“_-->");
	scanf("%d",&b);
	if(a > b)
	{
		printf("a‚³‚ñ‚ÌŸ‚¿");
	}
	else if(a == b)
	{
		printf("ˆø‚«•ª‚¯");
		
	}
	else
	{
		printf("b‚³‚ñ‚ÌŸ‚¿");
	}
	return 0;
}