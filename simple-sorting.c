#include <stdio.h>
int main()
{
    int a[50], i, j, num, temp;
    printf("enter the number of elements:");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < num-1; i++)
    {
        for (j = i+1; j < num; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("array after sorting are:");
    for (i = 0; i < num; i++)
    {
        printf("%d ",a[i]);
    }
    
}