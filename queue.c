#include<stdio.h>
#include<stdlib.h>
#define max 4
char cq[max],elem;
int i,j,ch,count=0,front=0,rear=-1;
void ins();
void dis();
void del();
int main()
{
    for(;;)
    {
        printf("1-ins 2-del 3-dis 4-exit\n");
        printf("enter your choice\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:ins();
            break;
        case 2:del();
        break;
        case 3:dis();
        break;
        case 4:exit(0);
        default:printf("wrong\n");
    
        }
    }
    return 0;
}
void ins()
{
    if (count==max)
    {
        printf("circular queue is full\n");   
    }
    else
    {
        printf("enter the character\n");
        scanf(" %c",&elem);
        rear=(rear+1)%max;
        cq[rear]=elem;
        count++;
    }
}
void del()
{
    if (count==0)
    {
        printf("empty\n");
    }
    else
    {
        printf("del ele =%c\n",cq[front]);
        front=(front+1)%max;
        count--;
    }
}
void dis()
{
    if (count==0)
    {
    printf("circular queue is empty\n");
    }
    else
    {
        printf("contents\n");
        i=front;
        for ( j = 0; j < count; j++)
        {
            printf("%c\t\n",cq[i]);
            i=(i+1)%max;
        }
        
    }
    
}