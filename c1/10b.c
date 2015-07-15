#include <stdio.h>
int main(void)
{
	char moji[] = "ABCD";
	char *mp;
	int n;
	
	mp = moji;
	
	while(*mp != '\0')
	{
		printf("%c\n",*(mp++));
		
	}
	
	return 0;
}