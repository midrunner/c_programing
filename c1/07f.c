#include <stdio.h>
int main(void)
{
	int n;
	int array[5] = {0,0,0,0,0};
	int ret;
	printf("®”“ü—Í-->");
	ret = scanf("%d",&n);
	while(ret != EOF &&(n > 0 && n <= 50))
	{
		array[n / 10] = array[n / 10] + 1;
		printf("®”“ü—Í-->");
		ret = scanf("%d",&n);
	}
	printf("* * * Œ‹‰Ê * * *\n");
	for(n = 0; n < 5;n++)
	{
		printf("”z—ñ[%d]:%dŒ\n",n,*(array + n));
	}
	return 0;
}