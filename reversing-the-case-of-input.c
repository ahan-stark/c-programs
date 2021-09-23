#include <stdio.h>
#include <ctype.h> // for using toupper  and tolower
int main()
{
    char alpha;
    printf("Enter an alphabet : ");
    putchar('\n');
    alpha = getchar();
    printf("\n\nReverse case of %c is :  ", alpha);
    if (islower(alpha))
        putchar(toupper(alpha));
    else
        putchar(tolower(alpha));
    return 0;
}