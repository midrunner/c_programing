
/*“ü—Í‚µ‚½‘å•¶Žš¨¬•¶Žš@¬•¶Žš¨‘å•¶Žš‚É‚µ‚½‚¢*/
#include <stdio.h>
int main()
{
	char moji;
	printf("•¶Žš“ü—Í-->");
	scanf("%c",&moji);
	if(moji < 'A' || moji > 'z' &&  (moji > 'Z' && moji < 'a')  ) /*“ÁŽê‚È•¶Žš‚¾‚Æ•ÏŠ·‚Å‚«‚È‚¢‚É‚µ‚½‚¢*/
	{
		printf("•ÏŠ·Œã:•ÏŠ·‚Å‚«‚È‚¢");
		return 1;
	}
	else if(moji > 'Z')         /*¬•¶Žš‚È‚ç‘å•¶Žš‚É‚µ‚½‚¢*/
	{
		moji = moji - 32;
	}
	else                        /*‘å•¶Žš‚È‚ç¬•¶Žš‚É‚µ‚½‚¢*/
	{
		moji = moji + 32;
	}
	printf("•ÏŠ·Œã:%c\n",moji);
	return 0;

}