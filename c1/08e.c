#include <stdio.h>
int main(void)
{
	char moji[] = "BCDXEFGHIJKLMNOWPQRSZTUVAY";
	char start;
	char end;
	int n;
	
	printf("moji:%s\n",moji);
	
	printf("開始位置-->");
	scanf(" %c",&start);
	
	printf("終了位置-->");
	scanf(" %c",&end);
	
	printf("表示");
	
	for(n = 0; moji[n] != start ; n++);
	
	while(moji[n] != end)
	{
		printf("%c",moji[n]);
		n++;
		if(moji[n] == '\0')
		{
			n = 0;
		}
		
	}
	printf("%c",moji[n]);
	
	return 0;
}