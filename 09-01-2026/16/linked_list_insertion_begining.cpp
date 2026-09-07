#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL;
    struct node *newnode;
    int i, n;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        newnode->next = head;
        head = newnode;
    }

    printf("Linked List: ");

    newnode = head;

    while(newnode != NULL)
    {
        printf("%d -> ", newnode->data);
        newnode = newnode->next;    }                                       


    printf("NULL");

    return 0;
}
