#include <stdio.h>
int main(void)
{
	int moon;
	printf("月入力-->");
	scanf("%d",&moon);
	
	switch(moon)
	{
		case 2:
			printf("日数:29日\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("日数:30日\n");
			break;
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			printf("日数:31日\n");
			break;
		default:
			printf("月の入力エラー\n");
			break;
		
		
	}
	
	return 0;
}