#include <stdio.h>
#include <string.h>

char *MojiSearch(char *m,char *s);
char *ret;

int main(void)
{
	char moji[] = "ABCDEFGHJABFGHSKL";
	char search[20];
	printf("検索文字列-->");
	scanf("%s",search);
	
	ret = MojiSearch(moji,search);
	if(ret != NULL)
	{
		printf("検索位置%s\n",ret);
	}
	else
	{
		printf("検索位置:検索したい文字はありませんでした\n");
	}
	return 0;
}

char *MojiSearch(char *m,char *s)
{
	int num;
	int i;
	int slen;
	char ans[20];
	
	slen = strlen(s);
	
	num = 0;
	while(*(m+num) != '\0'&& strncmp(m+num,s,slen))
	{
		num++;
	}
	if(*(m+num) != '\0')
	{
		return m+num;
	}
	else
	{
		return NULL;
	}
	
}
