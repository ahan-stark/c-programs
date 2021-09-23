#include <stdio.h>
int main()
{
    int num, i;
    printf("enter the number\n");
    scanf("%d", &num);
    printf("the factors of %d is:", num);
    for (i = 1; i<= num/2; i++)
    {
        if (num % i == 0)
            printf("%d\t", i);
    }
}