#include<stdio.h>
int main(){
    int i,a[i],num,pos;
    printf("enter the number of elements:");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("current array:");
    for(i=0;i<num;i++){
        printf("%d ",a[i]);
    }
    printf("\nenter the position to deleted:");
    scanf("%d",&pos);
    if (pos>num || pos<0)
    {
        printf("invalid position");
    }
    else
    {
        for ( i = pos-1; i < num-1; i++)
        {
            a[i]=a[i+1];
        }
        
    }
    printf("\narray after deleting element at %d pos is ",pos);
    for(i=0;i<num-1;i++)
    {
        printf("%d ",a[i]);
    }
    
}