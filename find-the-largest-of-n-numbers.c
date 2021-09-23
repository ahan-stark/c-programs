#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *a;
    printf("enter the number of elements:");
    scanf("%d", &num);
    a = (int *)malloc(100 * sizeof(int));
    printf("enter %d elements:\n", num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < num; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
    }
    printf("the largest number among the entered numbers is: %d", a[0]);
}