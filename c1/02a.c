#include <stdio.h>
int main(void)
{
	int a,b;
	int max;
	printf("変数aの入力-->");
	scanf("%d",&a);
	printf("変数aの入力-->");
	scanf("%d",&b);
	if(a > b)
	{
		max = a;
	
	}
	else
	{
		max = b;
		
	}
	printf("maxの値:%d\n",max);
	return 0;

}