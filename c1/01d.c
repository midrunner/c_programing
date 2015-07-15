#include <stdio.h>
int main(void)
{ 
   char c;
   double l;
   int d;
   
   
   printf("あなたのイニシャル-->");
   scanf("%c",&c);
   printf("あなたの身長-->");
   scanf("%lf",&l);
   printf("今日の日付-->");
   scanf("%d",&d);
   printf("イニシャル:%c\n",c);
   printf("身長:%f\n",l);
   printf("今日の日付:%d日\n",d);
   return 0;
}