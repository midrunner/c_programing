#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char moji[30];
	int n;
	int su = 0;
	int hoka = 0;
	
	printf("文字列入力-->");
	scanf("%30s",moji);
	
	for(n = 0; moji[n] != '\0';n++)
	{
		if(isdigit(moji[n]))
		{
			su++;
		}
		else
		{
			hoka++;
		}
	}
	printf("数字:%d\n",su);
	printf("その他:%d\n",hoka);
	return 0;
}