#include <stdio.h>
#include <string.h>

int main(void)
{
	char m1[20];
	char m2[20];
	
	printf("文字列1入力-->");
	scanf(" %20s",m1);
	
	printf("文字列2入力-->");
	scanf(" %20s",m2);
	
	if(!strcmp(m1,m2))
	{
		printf("2つの文字列は同じです\n");
	}
	else
	{
		printf("2つの文字列は違います\n");
		
	}
	
	return 0;
}