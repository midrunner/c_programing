#include <stdio.h>
int main(void)
{
	int dat[8];
	int n;
	int i;
	int total = 0;
	int min;
	double ave;
	for(n = 0; n < 8; n++)
	{
		printf("数値[%d]-->",n);
		scanf("%d",dat+n);
		total = total + dat[n];
	}
	ave = (double)total / n;
	
	min = dat[0];
	
	for(n = 1;n < 8; n++)
	{
		 
		 if((ave - min)*(ave - min) > ((ave - dat[n]) * (ave - dat[n])))
		{
			min = dat[n];
			i = n;
		}
		
	}
	printf("平均:%.1f\n",ave);
	printf("結果	要素番号:%d\n",i);
	printf("		データ:%d\n",min);
	return 0;
}