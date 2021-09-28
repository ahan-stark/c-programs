#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], sum[10][10], dif[10][10], i, j, m, n;
    printf("enter the rows and column\n");
    scanf("%d%d", &m, &n);
    printf("enter the first matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    printf("\nenter the second matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    printf("The first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe second matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    printf("The sum of the 2 matrices is:\n ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            dif[i][j] = a[i][j] - b[i][j];
        }
    printf("The difference of the 2 matrices is:\n ");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", dif[i][j]);
        }
        printf("\n");
    }
    return 0;
}