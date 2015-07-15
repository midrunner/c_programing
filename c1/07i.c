#include <stdio.h>
int main(void)
{
	int dat[10];
	int err[10];
	int n;
	int i = 0;
	double ave= 0;
	int total = 0;
	for(n = 0; n < 10;n++)
	{
		printf("データ[%d]入力-->",n);
		scanf("%d",dat+n);
		total = total + dat[n];
		
	}
	ave = (double)total / n;
	for(n = 0; n < 10;n++)
	{
		if(dat[n] >= ave+50 || dat[n] <= ave-50)
		{
			err[i] = n;
			i++;
			
		}
		printf("%d  ",err[i]);
	}
	printf("平均:%.1f\n",ave);
	printf("エラー件数:%d\n",i);
	for(n = 0; n < i;n++)
	{
		printf("%d:%d\n",err[n],dat[err[n]]);
	}
	
	return 0;
}