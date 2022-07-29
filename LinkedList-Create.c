#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *nextnode;
};
int main(int argc, char const *argv[])
{
    struct Node *firstNode = NULL;
    struct Node *secondNode = NULL;
    struct Node *thirdNode = NULL;

    firstNode = (struct Node *)malloc(sizeof(struct Node));
    secondNode = (struct Node *)malloc(sizeof(struct Node));
    thirdNode = (struct Node *)malloc(sizeof(struct Node));

    firstNode->data = 123;
    firstNode->nextnode = secondNode;

    secondNode->data = 456;
    secondNode->nextnode = thirdNode;

    thirdNode->data = 789;
    thirdNode->nextnode = NULL;

    printf("%d\n", firstNode->data);
    printf("%d\n", secondNode->data);
    printf("%d\n", thirdNode->data);

    return 0;
}
