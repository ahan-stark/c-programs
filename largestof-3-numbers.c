#include <stdio.h>
int main()
{
    double a, b, c, largest;
    printf("enter 3 numbers:");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a > b && a > c)
    {
        largest = a;
        printf("largest of 3 numbers is: %.2lf", largest);
    }
    else if (b > a && b > c)
    {
        largest = b;
        printf("largest of 3 numbers is: %.2lf", largest);
    }
    else
    {
        largest = c;
        printf("largest of 3 numbers is: %.2lf", largest);
    }
    return 0;
}