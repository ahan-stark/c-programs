#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10], b[10][10], n, i, j;
    printf("enter the dimension:");
    scanf("%d", &n);
    printf("enter %d elements:\n", n * n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("The entered matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("the transporse of the matrix is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != b[i][j])
            {
                printf("Matrix is not Symmetric\n");
                exit(0);
            }
        }
    }
       printf("Matrix is  symmetric\n");

    return 0;
}