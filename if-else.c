#include<stdio.h>
int main(){
    int a,b,largest;
    printf("enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    largest=a;
    if(b>a){
        largest=b;

    }
    else{
        largest=a;
    }
    printf("largest of %d and %d is %d",a,b,largest);
    return 0;
}