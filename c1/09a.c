#include <stdio.h>
#include <string.h>

int main(void)
{
	char m1[20];
	char m2[10];
	
	printf("変数m1入力-->");
	scanf(" %s",m1);
	
	printf("変数m2入力-->");
	scanf(" %s",m2);
	
	strcat(m1,m2);
	
	printf("結果m1:%s\n",m1);
	
	return 0;
}