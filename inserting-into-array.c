#include <stdio.h>
int main()
{
    int a[100], i, pos, ele, num;
    printf("enter the number of elements:");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("enter element %d:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("current array =");
    for (i = 0; i < num; i++)
        printf("%d ", a[i]);
    printf("\nenter the element to be inserted:");
    scanf("%d", &ele);
    printf("enter the position in which it should be inserted:");
    scanf("%d", &pos);
    for (i = num-1; i >=pos-1; i--)
     a[i + 1] = a[i];
    a[pos - 1] = ele;
    printf("\narray after inserting is:");
    for (i = 0; i <= num; i++)
    {
        printf("%d\t", a[i]);
    }
}
