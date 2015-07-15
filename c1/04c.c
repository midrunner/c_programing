#include <stdio.h>
int main(void)
{
	
	int flag;
	int cost;
	int money = 0;
	printf("é˚éx,ã‡äz==>");

	while(scanf("%d,%d",&flag,&cost) != EOF)
	{   
		if(cost <= 0)
		{
			printf("Ç‡Ç§àÍìxì¸óÕÇµÇƒÇÀ\n");
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
			printf("Ç‡Ç§àÍìxê≥ÇµÇ≠ì¸óÕÇµÇƒÇÀ\n");
		}
		printf("é˚éx,ã‡äz==>");
	}
	printf("écçÇ:%dâ~",money);
return 0;
}