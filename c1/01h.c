#include <stdio.h>
int main(void)
{  
   double d;
   int c;
   printf("実数入力-->");
   scanf("%lf",&d);
   c = d + 0.5;
   printf("四捨五入後:%d\n",c);
   return 0;


}