#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50], i, n;
    printf("enter the number of elements:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int *ptr[n];
    for (i = 0; i < n; i++)
    {
        ptr[i]=&arr[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("value of %d is %d\n",i,*ptr[i]);
    }
    
}