#include <stdio.h>
void CurrencyEdit(int prince,char *edit);
int main(void)
{
	int cost;
	int num;
	char money[20];
	int total = 0;
	
	printf("単価,数量-->");
	scanf("%d,%d",&cost,&num);
	while(cost > 0 && num > 0)
	{
		CurrencyEdit(cost*num,money);
		printf("金額:%s\n",money);
		total = total + cost*num;
		printf("単価,数量-->");
		scanf("%d,%d",&cost,&num);
	}
	CurrencyEdit(total,money);
	printf("合計金額:%s\n",money);
	return 0;
}

/* 引数1:編集する数値*/
/* 引数2:変種後の文字列を設定するアドレス*/
void CurrencyEdit(int price,char *edit)
{
	int keta = 0;
	int i = 1;
	int num;
	int prove = 1;
	
	/* priceの桁を数えています */
	while(price / prove > 0) 
	{
		prove = prove*10;
		keta++;
	}
	
	/* 最初のカンマの位置までeditに数字を代入しています */
	*edit = '\\';
	while(keta % 3 > 0)
	{
		prove = prove/10;
		*(edit+i) = price / prove +'0';
		price = price % prove;
		keta--;
		i++;
	}
	/* 最初にeditにカンマを入れ、以後は3数字代入される毎にカンマを入れています */
	while(keta > 0)
	{
		if(i != 1)
		{
			*(edit+i) = ',';
			i++;
		}
		num = 0;
		while(keta > 0&&num <3)
		{
			prove = prove/10;
			*(edit+i) = price / prove +'0';
			price = price % prove;
			keta--;
			i++;
			num++;
		}
	}
	*(edit+i) = '\0';
}