#include <stdio.h>
int Power(int x,int n);

int main(void)
{
	int i;
	int num;
	
	printf("整数入力-->");
	scanf("%d",&i);
	
	printf("整数入力-->");
	scanf(" %d",&num);
	
	printf("値:%d\n",Power(i,num));
	
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