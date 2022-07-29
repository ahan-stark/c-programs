#include<stdio.h>
#include <math.h>
int main()
{
   int n;
   printf("enter n\n");
   scanf("%d", &n);
   if (n % 2 == 0)
   {
      printf("even\n");
   }
   else
   {
      printf("odd\n");
   }
   return 0;
}