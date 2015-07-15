#include <stdio.h>
#include <string.h>

char *MojiSearch(char *m,char *s);
char *ret;

int main(void)
{
	char moji[] = "ABCDEFGHJABFGHSKL";
	char search[20];
	printf("ŒŸõ•¶š—ñ-->");
	scanf("%s",search);
	
	ret = MojiSearch(moji,search);
	if(ret != NULL)
	{
		printf("ŒŸõˆÊ’u%s\n",ret);
	}
	else
	{
		printf("ŒŸõˆÊ’u:ŒŸõ‚µ‚½‚¢•¶š‚Í‚ ‚è‚Ü‚¹‚ñ‚Å‚µ‚½\n");
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
