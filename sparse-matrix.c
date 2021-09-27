#include <stdio.h>
int main()
{
    int row, col, a[50][50], i, j, count = 0;
    printf("enter rows and columns:");
    scanf("%d%d", &row, &col);
    printf("enter %d elements:", row * col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    printf("entered matrix is:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    if (count > (row * col) / 2)
    {
        printf("\n\nThe entered matrix is a sparse matrix\n\n");
    }
    else
    {
        printf("\n\nThe entered matrix is not a sparse matrix\n\n");
    }
    return 0;
}