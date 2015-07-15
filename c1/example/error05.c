#include <stdio.h>

/* 2つの数値を入力し、その合計を表示する */
int main(void)
{
    int num1;
    int num2;
    int sum;

    printf("数値1:");
    scanf("%d",&num1);
    printf("数値2:");
    scanf("%d",&num2);

    sum = num1 + num2;

    printf("入力した値の合計は %d です\n", sum);

    return 0;
}
