#include <stdio.h>
#include <string.h>

int main(void)
{
	char moji[30];
	char prove[30];
	int n;
	int p;
	printf("•¶Žš—ñ“ü—Í-->");
	scanf(" %30s",moji);
	
	printf("ŒŸõ•¶Žš-->");
	scanf(" %30s",prove);
	
	p = strlen(prove);
	
	for(n = 0; n < 30 - p;n++)
	{
		if(!strncmp(prove,moji+n,p))
		{
			printf("ˆê’vêŠ:%d\n",n);	
		}
		
	}
	
	return 0;
}