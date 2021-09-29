#include <stdio.h>
int fact(int a){
    if (a==0 || a==1)
    {
        return 1;
    }
    else
    {
        return (a*fact(a-1));
    }
    
}
int main()
{
    int n, f;
    printf("enter n:");
    scanf("%d", &n);
    f = fact(n);
    printf("factorial of %d is %d\n",n,f);
    return 0;
}