#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char moji[30];
	int n;
	int su = 0;
	int hoka = 0;
	
	printf("•¶š—ñ“ü—Í-->");
	scanf("%30s",moji);
	
	for(n = 0; moji[n] != '\0';n++)
	{
		if(isdigit(moji[n]))
		{
			su++;
		}
		else
		{
			hoka++;
		}
	}
	printf("”š:%d\n",su);
	printf("‚»‚Ì‘¼:%d\n",hoka);
	return 0;
}