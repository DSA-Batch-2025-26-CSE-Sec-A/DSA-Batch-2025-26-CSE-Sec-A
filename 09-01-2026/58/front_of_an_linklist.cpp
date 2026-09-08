#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head = NULL;
void insertFront(int value)
{
    struct Node *newNode;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void display()
{
    struct Node *temp=head;
    while (temp!=NULL)
	{
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main() {
    insertFront(30);
    insertFront(20);
    insertFront(10);
    printf("Linked List: ");
    display();
    return 0;
}
