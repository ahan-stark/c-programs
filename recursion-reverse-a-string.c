#include <stdio.h>
void reverse_s(char c[], int n)
{
    if (c[n] == '\0')
        return;
    reverse_s(c, n + 1);
    printf("%c", c[n]);
}
int main()
{
    char s[10], res;
    fgets(s, 10, stdin);
    reverse_s(s, 0);
}