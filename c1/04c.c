#include <stdio.h>
int main(void)
{
	
	int flag;
	int cost;
	int money = 0;
	printf("収支,金額==>");

	while(scanf("%d,%d",&flag,&cost) != EOF)
	{   
		if(cost <= 0)
		{
			printf("もう一度入力してね\n");
		}
	
		else if(flag == 0)
		{
			money = money + cost;
		}
		else if(flag == 1)
		{
			money = money - cost;
		}
		else
		{
			printf("もう一度正しく入力してね\n");
		}
		printf("収支,金額==>");
	}
	printf("残高:%d円",money);
return 0;
}