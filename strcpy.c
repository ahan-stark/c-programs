#include<stdio.h>
#include<string.h>
int main(){
    char a[50];
    char b[50];
    printf("Enter the string: ");
    fgets(a,50,stdin);
    strcpy(b,a);
    printf("you entered: %s",b);
    return 0;
}