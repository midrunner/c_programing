#include <stdio.h>
#include <string.h>

int main(void)
{
	char moji[30];
	char prove[30];
	int n;
	int p;
	printf("文字列入力-->");
	scanf(" %30s",moji);
	
	printf("検索文字-->");
	scanf(" %30s",prove);
	
	p = strlen(prove);
	
	for(n = 0; n < 30 - p;n++)
	{
		if(!strncmp(prove,moji+n,p))
		{
			printf("一致場所:%d\n",n);	
		}
		
	}
	
	return 0;
}