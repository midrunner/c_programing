#include <stdio.h>
int sub1(void);
int sub2(void);

int main(void)
{
	int num;
	int ret1 = 0;
	int ret2 = 0;
	
	printf("数値入力-->");
	scanf("%d",&num);
	
	while(num >= 0)
	{
		printf("数値入力-->");
		scanf("%d",&num);
		if(num % 2 == 0)
		{
			ret1 = sub1();
		}
		else
		{
			ret2 = sub2();
		}
	}
	printf("sub1:%d回(奇数)\n",ret1);
	printf("sub2:%d回(偶数)\n",ret2);
	
	return 0;
}
int sub1(void)
{
	static int i;
	i++;
	
	return i;	
}
int sub2(void)
{
	static int i;
	i++;
	
	return i;	
}