#include <stdio.h>
#include <string.h>

int main(void)
{
	char m1[50];
	char m2[80];
	char moji;
	int n = 0;
	int i;
	int j = 0;
	printf("ì¸óÕï∂éöóÒ(m1)-->");
	scanf("%50s",m1);
	
	moji = m1[i];
	
	while(m1[n] != '\0')
	{
		i = 0;
		while(m1[n] != moji)
		{
			strcpy(m1+j,m1+j+1);
			n++;
			i++;		
		}
		sprintf(m2,"@%d%c",i,moji);
		j++;
		

	}
	printf("à≥èkï∂éöóÒ(m2):%s",m1);
	return 0;
}