#include<stdio.h>
int main(){
    char s[50];
    printf("enter your name\n");
    fgets(s,50,stdin);
    printf("welcome %s\n",s);
    return 0;
}