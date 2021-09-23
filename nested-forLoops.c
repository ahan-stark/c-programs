#include <stdio.h>
int main()
{
    int num;
    printf("enter the pattern lines\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}