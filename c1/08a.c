#include <stdio.h>
int main(void)
{
	int n = 0;
	char moji[20];
	
	printf("文字入力-->");
	
	scanf("%20s",moji);
	
	while(moji[n] != '\0')
	{
		n++;
		
	}
	
	printf("文字数:%d\n",n);
	
	return 0;
}
