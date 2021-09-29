#include <stdio.h>
int fact(int a){
    int res = 0;
    if (a==0 || a==1)
    {
        return 1;
    }
    else
    {
        res = (a*fact(a-1));
        return res;
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