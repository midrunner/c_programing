#include <stdio.h>
double Average(int *p,int cnt);

int main(void)
{
	int array[10];
	int num = 0;
	
	while(num < 10)
	{
		printf("®”[%d]",num);
		scanf("%d",array+num);
		if(array[num] < 0)
		{
			break;
		}
		num++;
	}

	if(num != 0){
		
	printf("•½‹Ï:%.1f",Average(array,num));
	}
	return 0;
}

double Average(int *p,int cnt)
{
	double avg;
	int total = 0;
	int n;
	int i;
	for(i = 0 ;i < cnt;i++)
	{
		total = total + *(p+i);
	}
	avg = (double)total / cnt;
	return avg;
	
}