#include <stdio.h>
#include <math.h>
int main()
{
    int a[10][10], n, i, j, trace = 0, normal, mul, sum = 0;
    printf("enter the dimension:\n");
    scanf("%d", &n);
    printf("enter %d elements;\n", n * n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
            mul = a[i][j] * a[i][j];
            sum = sum + mul;
        }
       
    }
     normal = sqrt(sum);
    for (i = 0; i< n; i++)
    {
        trace = trace + a[i][i];
    }
    printf("\nThe normal of the given matrix is: %d", normal);
    printf("\nThe trace of the given matrix is: %d", trace);
    return 0;
}