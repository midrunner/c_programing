#include <stdio.h>
int main(void)
{
	FILE *fpr;
	int dat1;
	char dat2[5];
	int dat3;
	char dat4[5];
	fpr = fopen("Z:\\c1\\fileact\\Kadai12A.txt","r");
	
	printf("®”,•¶š—ñ\n");
	while(fscanf(fpr,"%d %s",&dat1,dat2)!=EOF)
	{ 
		printf(" %d  %s\n",dat1,dat2);
	}
	
	fclose(fpr);
	
	return 0;
}