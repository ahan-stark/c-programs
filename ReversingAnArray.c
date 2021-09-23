#include <stdio.h>
#include <stdlib.h>
int main()
{
   int n, i, a;
   printf("enter n\n");
   scanf("%d", &n);
   int *arr = (int *)malloc(n * sizeof(int));
   printf("enter array elements\n");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   printf("array in reversed format ");
   for (i = n - 1; i >= 0; i--)
   {
      printf("%d ", (arr[i]));
   }
   return 0;
}