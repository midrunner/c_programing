#include <stdio.h>
int main(void)
{
	FILE *fpw;
	int num1 = 10;
	char moji[] = "ABC";
	int num2 = 5;
	char moji2[] = "DEF";
	
	fpw = fopen("Z:\\c1\\fileact\\Kadai12A.txt","w");
	if(fpw == NULL)
	{
		printf("ファイルオープンエラー\n");
		exit(1);
	}
	fprintf(fpw,"%d",num1);
	fputs(moji,fpw);
	fclose(fpw);
	
	return 0;
}