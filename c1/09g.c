#include <stdio.h>
#include <string.h>
int main(void)
{
	char m1[30];
	char m2[30];
	char m3[30];

	int m1n,m2n,m3n;
	int i;
	
	
	printf("編集用文字列入力-->(m1)");
	scanf("%30s",m1);
	
	printf("対象文字列(m2)-->");
	scanf(" %30s",m2);
	
	printf("置換文字列(m3)-->");
	scanf(" %30s",m3);
	m1n = strlen(m1);
	m2n = strlen(m2);
	
	i = m1n;
	
	while(i > 0)
	{
		if(!strncmp(m1,m2,m2n))
		{
		
			strcpy(m1+m1n,m3);
			strcpy(m1,m1+m2n);
			m1n = strlen(m1);
			i = i - m2n;
		}
		else
		{
			strncpy(m1+m1n,m1,1);
			m1[m1n+1] = '\0';
			strcpy(m1,m1+1);
			m1n = strlen(m1);
			i = i-1;

		}
		
	}
	
	printf("編集後(m1):%s\n",m1);
	return 0;
}