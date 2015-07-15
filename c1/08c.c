#include <stdio.h>
int main(void)
{
	char moji[30];
	int n = 0;
	char prove;
	char change;
	
	printf("•¶Žš—ñ“ü—Í-->");
	scanf("%30s",moji);
	
	printf("ŒŸõ•¶Žš-->");
	scanf(" %c",&prove);
	
	printf("’uŠ·•¶Žš-->");
	scanf(" %c",&change);
	
	while(moji[n] != '\0')
	{
		if(moji[n] == prove)
		{
			moji[n] = change;
		}
		n++;	
	}
	printf("Œ‹‰Ê•¶Žš—ñ:%s\n",moji);
	return 0;
}