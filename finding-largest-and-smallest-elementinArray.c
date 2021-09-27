#include <stdio.h>
int main()
{
    int a[20], i, num, largest, smallest;
    printf("enter number of elements:");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
        for (i = 0; i < num; i++)
        {
            printf("enter element %d:", i + 1);
            scanf("%d", &a[i]);
        }
    printf("current array:");
    for (i = 0; i < num; i++)
    {
        printf("%d ", a[i]);
    }
    largest = a[0];
    for (i = 1; i < num; i++)
    {

        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    smallest = a[0];
    for (i = 1; i < num; i++)
    {

        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    
    printf("\nlargest:%d\n", largest);
    printf("smallest:%d\n",smallest);
}