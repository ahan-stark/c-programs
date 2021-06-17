#include<stdio.h>
#include<stdlib.h>
int n,elem,pos,i,ch,*a;
void create();
void display();
void insert();
void del();
int main()
{
	for(;;)
	{
		printf("1-create 2-display 3-insert 4-delete 5-exit\n");
		printf("enter ur choice\n");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:create();
			       break;
			 case 2:display();
				break;
			case 3:insert();
			       break;
			case 4:del();
			       break;
			case 5:exit(0);
			default:printf("wrong choice\n");
		}
	}
	return 0;
}
void create()
{
printf("enter the total number of elements\n");
scanf("%d",&n);
if((a=(int *)calloc(n,sizeof(int)))==NULL)
{
	printf("no sufficient memolry\n");
	exit(0);
}
printf("array is created\n");
}
void display()
{
	printf("array elements are \n");
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}
void insert()
{
	printf("enter the element to insert\n");
	scanf("%d",&elem);
	printf("enter the position\n");
	scanf("%d",&pos);
	if(pos<0||pos>=n)
	printf("invalid position\n");
	else if(a[pos]==0)
		a[pos]=elem;
	else
		printf("non empty position\n");
}
void del()
{
	printf("enter the position\n");
	scanf("%d",&pos);
	if(pos<0||pos>=n)
		printf("invalid position\n");
	else if(a[pos]==0)
		printf("no elements to delete\n");
	else
	{
		printf("del-ele=%d\n",a[pos]);
		a[pos]=0;
	}
}

