#include <stdio.h>
void fibonacci(int num);
int main()
{
    int num = 0;
    printf("Enter the number\n");
    scanf("%d", &num);
    fibonacci(num);
    return 0;
}
void fibonacci(int num)
{
    int a = 0, b = 1, c, i = 0;
    if (num == 0)
        printf("The fibonacci series is %d", a);
    if (num >= 1)
    {
        printf("The fibonacci series is %d\t%d", a, b);
        for (i = 0; i < num - 2; i++)
        {
            c = a + b;
            printf("\t%d", c);
            a = b;
            b = c;
        }
    }
}