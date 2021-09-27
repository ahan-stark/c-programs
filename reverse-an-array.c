#include <stdio.h>
int main()
{
    int a[100], i, n;
    printf("enter the number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter element%d:", i+1);
        scanf("%d", &a[i]);
    }
    printf("array before reversing is :");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    printf("array after reversing is:");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d\t", a[i]);
    }
}