#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char moji[30];
	char eimoji[30];
	char tamoji[30];
	int n;
	int i = 0;
	int g = 0;
	
	printf("ï∂éöóÒì¸óÕ-->");
	scanf("%30s",moji);
	
	for(n = 0; moji[n];n++) /* èåèÇÕmoji[n] != '\0' Ç∆ìØÇ∂*/
	{
		if(isalpha(moji[n]))
		{
			eimoji[i] = moji[n];
			i++;
		}
		else
		{
			tamoji[g] = moji[n];
			g++;
		}
	}
	eimoji[i] = tamoji[g] = NULL;
	
	printf("âpéö:%s\n",eimoji);
	printf("ÇªÇÃëº:%s\n",tamoji);
	
	return 0;
}