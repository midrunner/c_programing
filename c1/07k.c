#include <stdio.h>
#include <string.h>

void soto(int *array,int n);

int main(void)
{
	int array[20];
	int num=0;
	int ret;
	printf("***CTL+Z‚ª‰Ÿ‚³‚ê‚é‚Ü‚Å”’l‚ð“ü—Í‚Å‚«‚Ü‚·***\n");
	printf("”’l[%d]-->",num);
	ret = scanf("%d",array+num);
	
	while(ret != EOF && num < 20)
	{
		num++;
		printf("”’l[%d]-->",num);
		ret = scanf("%d",array+num);
	}
	soto(array,num);
	return 0;
}

void soto(int *array,int n)
{
	int pivot = *array;
	while(n > 0)
	{
		
	}
	soto(array,pivot)
}