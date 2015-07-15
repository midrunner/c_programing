#include <stdio.h>
int MyLen(char *ss);

int main(void)
{
	char moji[20];
	printf("•¶š—ñ“ü—Í-->");
	scanf("%s",moji);
	printf("•¶š”:%d",MyLen(moji));
	return 0;
	
}

int MyLen(char *ss)
{
	int i = 0;
	int num = 0;
	while(*(ss+i) != '\0')
	{
		num++;
		i++;
	}
	return num;
}