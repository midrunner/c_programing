#include <stdio.h>
void CurrencyEdit(int price,char *edit);
int main(void)
{
	int tanka;
	int vol;
	int price;
	char en[10];
	
	printf("単価,数量-->");
	scanf("%d,%d",&tanka,&vol);
	price = tanka * vol;
	CurrencyEdit(price,en);
	printf("合計金額:%s",en);
	return 0;
}

/*戻り値:なし*/
/*引数1:編集する数値*/
/*引数2:編集後の文字列を設定するアドレス*/

void CurrencyEdit(int price,char *edit)
{
	int num = 1;
	int i = 1;
	int i2 ;
	int keta;
	int price2;
	price2 = price;
	while(keta > 9)
	{
		price2 = price2 /10;
		num = num * 10;
		keta++;
	}
	
	*edit = '\\';
	while(price > 0)
	{
		*(edit+i) = price /num  + '0';
		price = price % num;
		num = num / 10;
		if(i == keta % 3 && keta / 3 != 0)
		{
			i++;
			*(edit+i) = ',';
		}
		i++;
		
	}
}