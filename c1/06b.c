#include <stdio.h>
int main(void)
{
	int moon;
	printf("Œ“ü—Í-->");
	scanf("%d",&moon);
	
	switch(moon)
	{
		case 2:
			printf("“ú”:29“ú\n");
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("“ú”:30“ú\n");
			break;
		
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			printf("“ú”:31“ú\n");
			break;
		default:
			printf("Œ‚Ì“ü—ÍƒGƒ‰[\n");
			break;
		
		
	}
	
	return 0;
}