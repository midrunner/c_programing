#include <stdio.h>
int main(void)
{
   int kamoku1,kamoku2;
   int total;
   double ave;
   printf("‰È–Ú1‚Ì“_”-->");
   scanf("%d",&kamoku1);
   printf("‰È–Ú2‚Ì“_”-->");
   scanf("%d",&kamoku2);
   total = kamoku1 + kamoku2;
   ave = (double)total / 2;
   printf("2‰È–Ú‚Ì‡Œv:%d\n",total);
   printf("2‰È–Ú‚Ì•½‹Ï:%f\n",ave);
   return 0;
}