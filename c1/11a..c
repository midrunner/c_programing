#include <stdio.h>
int Max(int dt1,int dt2);

int main(void)
{
	int a;
	int b;
	
	printf("数値1入力-->");
	scanf(" %d",&a);
	
	printf("数値2入力-->");
	scanf(" %d",&b);
	
	printf("大きい値%d\n",Max(a,b));

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