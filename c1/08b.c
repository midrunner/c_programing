#include <stdio.h>
int main(void)
{
	char moji[30];
	char kmoji[15];
	char gmoji[15];
	
	int n = 0;
	int n1 = 0;
	int n2 = 0;
	
	printf("•¶š—ñ“ü—Í-->");
	scanf("%30s",moji);
	
	while(moji[n] != '\0')
	{
		if(n % 2 == 0)
		{
			gmoji[n1] = moji[n];
			n1++;
		}
		else
		{
			kmoji[n2] = moji[n];
			n2++;
			
		}
		n++;
		
	}
	
	gmoji[n1] = '\0';
	kmoji[n2] = '\0';
	printf("‹ô”—v‘f:%s\n",gmoji);
	printf("Šï”—v‘f:%s\n",kmoji);
	
	return 0;
}