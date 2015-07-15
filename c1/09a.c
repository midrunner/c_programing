#include <stdio.h>
#include <string.h>

int main(void)
{
	char m1[20];
	char m2[10];
	
	printf("•Ï”m1“ü—Í-->");
	scanf(" %s",m1);
	
	printf("•Ï”m2“ü—Í-->");
	scanf(" %s",m2);
	
	strcat(m1,m2);
	
	printf("Œ‹‰Êm1:%s\n",m1);
	
	return 0;
}