#include <stdio.h>
int main(void)
{
	int num = 0;
	int array[5];
	while(num < 5)
	{
	
		printf("”’l[%d]-->",num);
		scanf("%d",array+num);
		num++;
	}
	
	num = 0;
	printf("\n");
	
	while(num < 5)
	{
		printf("”’l[%d]:%d\n",num,*(array+num));
		num++;
	}
	
	return 0;
}