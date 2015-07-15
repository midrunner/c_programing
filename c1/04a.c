#include <stdio.h>
int main(void)
{
	int i = 0;
	int total = 0;
	double ave = 0;
	int ten;
	printf("®”“ü—Í-->");
	scanf("%d",&ten);
	while(ten >= 0)
	{
		total = total +ten;
		i = i +1;
		printf("®”“ü—Í-->");
		scanf("%d",&ten);
	    
	}
	if(i != 0)
	{
		ave = (double)total / i;
	}
	printf("‡Œv:%d Œ”:%d •½‹Ï:%.1f\n",total,i,ave);
	return 0;
}