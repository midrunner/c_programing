#include <stdio.h>
int Power(int x,int n);

int main(void)
{
	int i;
	int num;
	
	printf("®”“ü—Í-->");
	scanf("%d",&i);
	
	printf("®”“ü—Í-->");
	scanf(" %d",&num);
	
	printf("’l:%d\n",Power(i,num));
	
	return 0;
}

int Power(int x,int n)
{
	static int total;
	static int num;
	if(n >= num)
	{
		if(num == 1)
		{
			total = x;
		}
		else
		{
			total = total * x ;
		}
		num++;
		Power(x,n);
	}
	return total;
	
}