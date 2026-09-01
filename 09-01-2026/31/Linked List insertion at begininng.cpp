#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL, *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    printf("Enter data: ");
    scanf("%d", &newNode->data);

    newNode->next = head;
    head = newNode;

    printf("Linked List: ");

    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }

    printf("NULL");

    return 0;
}