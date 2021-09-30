#include <stdio.h>
int natural_num(int a)
{
    if (a <= 50)
    {
        printf("%d\t", a);
        natural_num(a + 1);
    }
}
int main()
{
    int n = 1;
    printf("The first 50 natural numbers are:");
    natural_num(n);
    return 0;
}