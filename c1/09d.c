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
	
	printf("文字列入力-->");
	scanf("%30s",moji);
	
	for(n = 0; moji[n];n++) /* 条件はmoji[n] != '\0' と同じ*/
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
	
	printf("英字:%s\n",eimoji);
	printf("その他:%s\n",tamoji);
	
	return 0;
}