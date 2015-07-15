#include <stdio.h>

/* キーボードで入力した数値の２乗の値を表示する */
int main(void)
{

    int num;

    printf("数値:");
    scanf("%d",&num);

    printf("入力された数値の２乗は %d です\n", num * num);

    return 0;
}
