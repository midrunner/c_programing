#include <stdio.h>

/* iを1から10まで繰り返して、その合計を表示するプログラム */
int main(void)
{
    int i;
    int sum = 0;

    for(i=1;i<=10;i++)
	{
      sum = sum + i;
      printf("現在のsumは %d です\n", sum);
    }
    return 0;
}
