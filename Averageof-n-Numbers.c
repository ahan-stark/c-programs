#include <stdio.h>
int main()
{
    int marks[10], i, n, sum = 0, average;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        printf("Enter number%d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum / n;
    printf("Average = %d", average);
    return 0;
}