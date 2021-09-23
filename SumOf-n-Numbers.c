#include <stdio.h>
int main()
{
    int a[10],i, num, sum=0;
    printf("enter the number of elements\n");
    scanf("%d", &num);
    printf("enter the %d elements\n",num);
    for ( i = 0; i <num; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i <num; i++){
        sum=sum+a[i];
    }
    printf("The sum is %d",sum);
    
}