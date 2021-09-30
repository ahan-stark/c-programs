#include <stdio.h>
int sum_of_n(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a + sum_of_n(a - 1);
    }
}
int main()
{
    int n, result;
    printf("Enter n:");
    scanf("%d", &n);
    result = sum_of_n(n);
    printf("the sum from 1 to %d is %d", n, result);
}