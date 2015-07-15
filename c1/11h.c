
#include <stdio.h>
#include <string.h>

char *strMid(const char *ss,char *ch,int st,int cnt);		 
int main(void)
{
	char moji[20];
	char after[20];
	int start;
	int len;
	int ret;
	printf("文字列入力-->");
	scanf("%s",moji);
	printf("指定範囲(開始位置,取得数)-->");
	scanf("%d,%d",&start,&len);
	printf("startとlenは\n%d\n%d\n",start,len);
	
	ret = strMid(moji,after,start,len);
	
		if(ret != NULL)
		{
			printf("取り出した文字列%s",ret);
		}
		else
		{
			printf("**指定範囲外エラー**");
		}
	return 0;
}

/*戻り値:正常[取り出した文字列の先頭アドレス](引数2)*/
/*引数1 :取り出される文字列の先頭アドレス*/
/*引数2 :取り出した文字列を格納する先頭アドレス*/
/*引数3 :取り出す文字列の開始位置 ※C言語の配列(0~)で対応*/
/*引数4 :取り出す文字列の文字数*/
char *strMid(const char *ss,char *ch,int st,int cnt)
{
	int sslen;
	int num = 0;
	
	sslen = strlen(ss);
	printf("ｓｓの長さ\n%d\n",sslen);
		
		
		if(0 > st || sslen < st ||sslen <= st+cnt || 0 > cnt)
		{
			return NULL;
		}
		
		while(cnt > 0)
		{
			*(ch+num) = *(ss +st+num);
			num++;
			cnt--;
		}
		return ch;
	
	
}