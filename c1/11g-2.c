#include <stdio.h>
int Power(int x, int n);
int main(void)
{
	int num;
	int facnum;
	
	printf("®”“ü—Í-->");
	scanf("%d",&num);
	
	printf("®”“ü—Í-->");
	scanf("%d",&facnum);
	
	printf("’l-->%d\n",Power(num,facnum));
	
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