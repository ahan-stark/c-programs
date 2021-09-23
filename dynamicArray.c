#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0;
    printf("enter n\n");
    scanf("%d",&n);
    int *a=malloc(n*sizeof(int));// dynamic array allocation using malloc 
    printf("enter array elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
   
    printf("sum=%d",sum); 
    free(a);  //deallocating memory
    return 0;
   

}
