#include <stdio.h>
#include <string.h>
int main()
{
    char a[50];
    char b[50];
    int compare;
    printf("Enter 1st string: ");
    fgets(a,50,stdin);
    printf("Enter 2nd string:");
    fgets(b,50,stdin);
    compare = strcmp(a, b);
    if (compare == 0)
    {
        printf("Both the string's are same\n");
    }
    else
    {
        printf("Both the strings's are not same\n");
    }
    return 0;
}