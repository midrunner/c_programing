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
		if(n > 0)
		{
			Power(x,n-1) * x;
		}
		else
		{
			return 1;
		}
	
		return Power(x,n-1) * x;
}