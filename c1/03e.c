#include <stdio.h>
int main(void)
{
	int i,j;
	int kekka;
	printf("    1   2   3   4   5   6   7   8   9\n");
	printf("______________________________________");
	for(i = 1;i < 10;i++)
	{   
		printf("\n");
		printf("%d|",i);
		for(j=1;j < 10;j++)
		{
	     	kekka = i * j;
			printf("%3d ",kekka);

		}
	}
	printf("\n");
	return 0;
}