#include <stdio.h>
int remove_duplicate(int a[], int num)
{
    int i, j = 0;
    if (num == 0 || num == 1)
    {
        num=1;
    }
    int temp[num];
    for (i = 0; i <num - 1; i++)
        if (a[i] != a[i + 1])
        {
            temp[j++] = a[i];
        }
    temp[j++] = a[num - 1];
    for (i = 0; i < j; i++)
    {
        a[i] = temp[i];
    }
    num=j;
    for (int i = 0; i < num; i++)
        printf("%d", a[i]);
}
int main()
{
    int i, j = 0, num;
    printf("enter number of elements:");
    scanf("%d", &num);
    int a[num];
    for (i = 0; i < num; i++)
    {
        printf("enter element %d", i + 1);
        scanf("%d", &a[i]);
    }
    remove_duplicate(a, num);
    
    return 0;
}