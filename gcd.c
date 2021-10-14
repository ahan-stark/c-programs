#include <stdio.h>
void main()
{
    int n1, n2, i=1, gcd;
    printf("enter 2 numbers:");
    scanf("%d%d", &n1, &n2);
    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }
    printf("GCD of %d and %d is %d\n", n1, n2, gcd);
}