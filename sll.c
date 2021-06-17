#include<stdio.h>
#include<stdlib.h>
struct list
{
    char ssn[10];
    char name[20];
    char dept[20];
    char dsg[20];
    float sal;
    charphno[10];
    struct list *llink,*rlink;
};
typedef struct list*node;
node first=NULL;
void read(node temp);
void insr();
void insf();
void delf();
void delr();
void dis();
int i,n,ch,c=0;
int main()
{
    for (;;)
    {
        printf("1-create 2-display 3-insf 4-insr 5-delf 6-delr 7-exit\n");
        printf("enter your choice\n");
        scanf("%d:,&ch");
        {
            
        }
    }
    
}

