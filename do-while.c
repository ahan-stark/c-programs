#include<stdio.h>
int main(){
    int i=1,a;
    printf("enter a number\n");
    scanf("%d",&a);
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=a);
    printf("the value after exiting the loop is: %d",i);
    
}