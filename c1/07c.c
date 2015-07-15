#include <stdio.h>
int main(void)
{	
	int num = 0;
	int total = 0;
	int array[5];
	while(num < 5)
	{
		printf("®”“ü—Í-->");
		scanf("%d",array+num);
		total = total + *(array + num);
		num++;
	}
	printf("‡Œv:%d\n",total);
	printf("Œ‹‰Ê:%d %d %d %d %d\n",array[0],array[1],array[2],array[3],array[4]);
	
	return 0;
}
