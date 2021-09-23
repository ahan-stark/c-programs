#include <stdio.h>
void palindrome(int num);
int main()
{
    int num;
    printf("Enter number\n");
    scanf("%d", &num);
    palindrome(num);

    return 0;
}
void palindrome(int num)
{
    int temp, rem, sum = 0;
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        sum = (sum * 10) + rem;
        num = num / 10;
    }
    if (temp == sum)
        printf("its a palindrome");
    else
    {
        printf("not a palindrome");
    }
}