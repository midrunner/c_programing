#include <stdio.h>
int Add(int *pa,int *pb);

int main(void)
{
	int a;
	int b;
	
	printf("•Ï”a“ü—Í-->");
	scanf("%d",&a);
	
	printf("•Ï”b“ü—Í-->");
	scanf("%d",&b);
	
	printf("%d\n",Add(&a,&b));
	
}

int Add(int *pa,int *pb)
{
	int sum;
	sum = *pa + *pb;
	return sum;
}
