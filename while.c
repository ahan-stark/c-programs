#include <stdio.h>
int main()
{
    int a, i = 1;
    printf("enter a number\n");
    scanf("%d", &a);
    while (i <= a)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}