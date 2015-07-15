#include <stdio.h>

/* *を使って三角形を表示する */
int main(void)
{
    int i,j;

    for(i=0;i<=10;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
	 printf("\n");
    }
   
    return 0;
}
