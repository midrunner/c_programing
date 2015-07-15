#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void)
{
	char anser[5];
	char you[5];
	int n;
	int i;
	int hit;
	int burou;
	time_t t;
	time(&t);
	srand(t);
	
	for(n = 0; n< 4; n++)
	{
		anser[n] = rand() % 10 + '0';
	}
	anser[n] = '\0';
	n = 0;
	while(n<4)
	{
		i = 4;
		while(anser[n] != anser[i])
		{
			i--;
		}
		if(i == n)
		{
			n++;
		}
		else
		{
			
			anser[n] = rand() % 10 + '0';
			n = 0;
		}
		
	}
	printf("4Œ…‚Ì”Žš‚ð“ü—Í-->");
	scanf("%4s",you);
	
	
	while(strcmp(anser,you))
	{
		n = 0;
		hit = burou = 0;
		while(n < 4)
		{
			
			if(anser[n] == you[n])
			{
				hit++;
			}
			else if(you[n] == anser[0] || you[n] == anser[1] || you[n] == anser[2] || you[n] == anser[3])
			{
				burou++;
			}
			n++;
		}
		
		printf("hit :%d\n",hit);
		printf("burou :%d\n",burou);
		printf("4Œ…‚Ì”Žš‚ð“ü—Í-->");
		scanf("%4s",you);
	}
	printf("‚¨‚ß\n");
	
	return 0;
}