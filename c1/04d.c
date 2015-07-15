#include <stdio.h>
int main(void)
{
	int num;
	int ten;
	int count = 0;
	int total = 0;
	int modori;
	double avg;
	int maxn,maxt;
	int minn,mint;
	
	printf("番号,得点-->");
	modori = scanf("%d,%d",&num,&ten);
	maxt = mint = ten;
	maxn = minn = num;
	
	while(modori != EOF)
	{
		if(maxt <= ten)
		{
			maxt = ten;
			maxn = num;
		}
		if(mint >= ten)
		{
			mint = ten;
			minn = num;
		}
		total = total + ten;
		count++;
		printf("番号,得点-->");
 		modori = scanf("%d,%d",&num,&ten);
		
	}

		avg = (double)total/count;
		printf("平均点:%.1f\n",avg);
		printf("最高点 番号:%d 得点:%d\n",maxn,maxt);
		printf("最低点 番号:%d 得点:%d\n",minn,mint);
		
	return 0;
}