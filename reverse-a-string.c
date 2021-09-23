#include <stdio.h>
int main()
{
    char str[50], rev[50];
    int i, j, count = 0;
    printf("Enter the string\n");
    scanf("%s", str);
    printf("The string before reversing is %s\n", str);
    while (str[count] != '\0')
    {
        count++;
    }
    j = count - 1;
    for (i = 0; i < count; i++)
    {
        rev[i] = str[j];
        j--;
    }
    rev[i]='\0';
    printf("The string after reversing is %s\n", rev);
}