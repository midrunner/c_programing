#include <stdio.h>
#include <string.h>

int main(void)
{
	char m1[30];
	char m2[30];
	int i = 0;
	int n;
	int m2num;
	
	printf("•¶Žš—ñ“ü—Í(m1)-->");
	scanf(" %30s",m1);
	
	printf("íœ•¶Žš—ñ(m2)-->");
	scanf(" %30s",m2);
	
	m2num = strlen(m2);
	
	for(n = 0; m1[n] != '\0'; n++)
	{
		if(!strncmp(m2,m1+n,m2num)) /*strncmp(m2,m1+n,m2num) == 0 ‚Æ“¯‹`*/
		{
			strcpy(m1 + n,m1+n+m2num);
			n = n-1;
		}
	
	}
	printf("Œ‹‰Ê•¶Žš—ñ%s\n",m1);
	
	return 0;
}