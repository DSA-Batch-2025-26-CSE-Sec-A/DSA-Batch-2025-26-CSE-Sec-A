#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
//Function for insertion at beginning
struct node *insertBeg(struct node *head,int info)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=info;
    newnode->next=head;
    head=newnode;
    return head;
};

//Display function
void display(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head=NULL;
    head=insertBeg(head, 30);
    head=insertBeg(head, 20);
    head=insertBeg(head, 10);
    printf("\nBefore insertion ");
    display(head);
    head=insertBeg(head, 5);
    printf("\nAfter insertion ");
    display(head);
    return 0;
}
