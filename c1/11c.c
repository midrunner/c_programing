#include <stdio.h>
int Add(int *pa,int *pb);

int main(void)
{
	int a;
	int b;
	
	printf("変数a入力-->");
	scanf("%d",&a);
	
	printf("変数b入力-->");
	scanf("%d",&b);
	
	printf("%d\n",Add(&a,&b));
	
}

int Add(int *pa,int *pb)
{
	int sum;
	sum = *pa + *pb;
	return sum;
}
