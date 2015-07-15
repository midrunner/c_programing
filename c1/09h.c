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
	
	int m1n;
	int m2n;
	double rate;
	
	printf("ì¸óÕï∂éöóÒ(m1)-->");
	scanf("%50s",m1);
	
	moji = m1[n];
	while(m1[n] != '\0')
	{
		i = 0;
		while(m1[n] == moji)
		{
			n++;
			i++;
		}
		if(i == 1)
		{
			sprintf(m2+j,"%c",moji);
			j = j+1;
		}
		else
		{
			sprintf(m2+j,"@%d%c",i,moji);
			j = j + 3;
		}
		moji = m1[n];
	}
	printf("à≥èkï∂éöóÒ(m2):%s\n",m2);
	m1n = strlen(m1);
	m2n = strlen(m2);
	
	rate = (double)m2n / m1n *100;
	
	printf("à≥èkî‰:%2.1f\n",rate);
	return 0;
}