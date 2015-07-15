#include <stdio.h>
#include <string.h>

int main(void)
{
	char m1[20];
	char m2[20];
	
	printf("•¶Žš—ñ1“ü—Í-->");
	scanf(" %20s",m1);
	
	printf("•¶Žš—ñ2“ü—Í-->");
	scanf(" %20s",m2);
	
	if(!strcmp(m1,m2))
	{
		printf("2‚Â‚Ì•¶Žš—ñ‚Í“¯‚¶‚Å‚·\n");
	}
	else
	{
		printf("2‚Â‚Ì•¶Žš—ñ‚Íˆá‚¢‚Ü‚·\n");
		
	}
	
	return 0;
}