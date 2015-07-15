#include <stdio.h>
int main(void)
{
	char file_path[200];
	char file_name[10];
	char s[20];
	FILE *fpr;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n") //改行おすすめ
	printf("ファイル名入力-->");
	scanf("%s",file_name);
	sprintf(file_path,"Z:\\c1\\%s",file_name);
	fpr = fopen(file_path,"r");
	if(fpr != NULL)
	{
		printf("ファイルは通常に開けました\n");
		while(fgets(s,5,fpr) != NULL)
		{
			printf("%s",s);
		}
		printf("\n");
	
	
	}
	else
	{
		printf("ファイルは開けてないよ\n");
	}
	fclose(fpr);
	return 0;
}
