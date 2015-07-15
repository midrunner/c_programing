#include <stdio.h>
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int array1[10];
	int array2[10];   /* 無駄な配列を用意したくない場合はどうすればいいです？ */
	while(num1 < 10)
	{
		printf("整数[%d]-->",num1);
		scanf("%d",&array1[num1]);
		if(array1[num1] < 0)
		{
			*(array2+num2) = array1[num1]; /* -の値の配列1の要素を新しく用意した配列2に入れていく */ 
			num2++; 
		}
		num1++;
	}
	
	printf("\n負の値の一覧\n");
	num1 = 0;                             /* 値が入れられた配列2の要素までを表示 */
	
	while(num1 < num2)
	{
		printf("%d ",array2[num1]);
		num1++;
	}
	return 0;
}