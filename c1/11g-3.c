#include <stdio.h>
int Power(int x, int n);
int main(void)
{
	int num;
	int facnum;
	
	printf("整数入力-->");
	scanf("%d",&num);
	
	printf("整数入力-->");
	scanf("%d",&facnum);
	
	printf("値-->%d\n",Power(num,facnum));
	
	return 0;
}

int Power(int x,int n)
{	
	int total = 1;
	if(n > 0)
	{
		total = Power(x,n-1) * x;
	}
	return total;
}