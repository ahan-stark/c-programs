#include <stdio.h>
int main()
{
    int num, exp, value=1;
    printf("enter number and exponent");
    scanf("%d%d", &num, &exp);
    for (int i = 1; i <= exp; i++)
    {
        value*=num;
    }
    printf("the exponential value is %d", value);
    return 0;
}