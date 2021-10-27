#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char*s=malloc(100*sizeof(char));
scanf("%[^\n]",s);
int i,j,c;
for(i=0;i<10;i++)
{ 
    c=0;
    for(j=0;s[j]!='\0';j++)
    {
        if(s[j]==48+i)
        c++;
    }
    printf("%d ",c);
} 
    return 0;
}
