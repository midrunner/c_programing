#include <stdio.h>
int Max(int dt1,int dt2);

int main(void)
{
	int a;
	int b;
	
	printf("”’l1“ü—Í-->");
	scanf(" %d",&a);
	
	printf("”’l2“ü—Í-->");
	scanf(" %d",&b);
	
	printf("‘å‚«‚¢’l%d\n",Max(a,b));

	return 0;
}

int Max(int dt1,int dt2)
{
	int max;
	
	max = dt1;
	if(dt1 < dt2)
	{
		max = dt2;
	}
	
	return max;
}