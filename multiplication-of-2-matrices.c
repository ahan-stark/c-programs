#include <stdio.h>
int main()
{
    int n, m, c, d, p, q, k, first[10][10], second[10][10], pro[10][10], sum = 0;
    printf("\nEnter the number of rows and columns of the first matrix: \n\n");
    scanf("%d%d", &m, &n);
    printf("\nEnter the %d elements of the first matrix: \n\n", m * n);
    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);
    printf("\nEnter the number of rows and columns of the second matrix: \n\n");
    scanf("%d%d", &p, &q);
    if (n != p)
        printf("Matrices with the given order cannot be multiplied with each other.\n\n");
    else
    {
        printf("\nEnter the %d elements of the second matrix: \n\n", m * n);
        for (c = 0; c < p; c++)
            for (d = 0; d < q; d++)
                scanf("%d", &second[c][d]);
        printf("\n\nThe first matrix is: \n\n");
        {
            for (c = 0; c < p; c++)
            {
                for (d = 0; d < n; d++)
                {
                    printf("%d\t", first[c][d]);
                }
                printf("\n");
            }
        }
        printf("\n\nThe second matrix is: \n\n");
        for (c = 0; c < p; c++)
        {
            for (d = 0; d < q; d++)
            {
                printf("%d\t", second[c][d]);
            }
            printf("\n");
        }

        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            {
                for (k = 0; k < p; k++)
                {
                    sum = sum + first[c][k] * second[k][d];
                }
                pro[c][d] = sum;
                sum = 0;
            }
        }
        printf("\n\nThe multiplication of the two entered matrices is: \n\n");
        for (c = 0; c < m; c++)
        {
            for (d = 0; d < q; d++)
            {
                printf("%d\t", pro[c][d]);
            }
            printf("\n");
        }
    }
    return 0;
}