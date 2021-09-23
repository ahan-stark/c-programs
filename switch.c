#include<stdio.h>
int main(){
    char letter;
    printf("enter a letter to check whether a letter is a vowel\n");
    scanf("%c",&letter);
    switch(letter){
        case 'a':
        case 'e':
        case 'i':
        case '0':
        case 'u':printf("its an vowel");
        break;
        default:printf("not an vowel character");
    }
    return 0;
}