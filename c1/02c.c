#include <stdio.h>
int main(void)
{   
    int ten;
	printf("点数入力-->");
	scanf("%d",&ten);
	if(ten < 0 )
	{
		printf("点数入力エラー(0未満)です\n");
	}
	else if(ten > 100)
	{
		printf("点数入力エラー(100を超える)です\n");
	}
	else if(ten < 60)
	{
		printf("不合格です\n");
	}
	else
	{
		printf("合格です\n");
	}
	return 0;
}