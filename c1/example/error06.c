#include <stdio.h>

/* 入力した３つの値の、合計・平均を表示する */
int main(void) {

    int i,j,k;
    int sum;
	int average;

    printf("数値1:");
    scanf("%d",&i);
    printf("数値2:");
    scanf("%d",&j);
    printf("数値3:");
    scanf("%d",&k);

    sum     = i + j + k;
    average = (i + j + k) / 3;

    printf("３つの数値の合計: %d\n", sum);
    printf("３つの数値の平均: %d\n", average);
	return 0;


}
