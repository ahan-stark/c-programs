#include <stdio.h>
int main()
{
    int a[10][10], i, j, determinant;
    printf("enter 4 elements:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            {
                scanf("%d", &a[i][j]);
            }
        }
    }
    printf("matrix is :\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {

            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    determinant = (a[0][0] * a[1][1]) - (a[1][0] * a[0][1]);
    printf("The determinant of 2*2 matrix is:%d - %d = %d", (a[0][0] * a[1][1]), (a[1][0] * a[0][1]), determinant);
}
