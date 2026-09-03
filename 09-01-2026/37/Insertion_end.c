#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

//Function for insertion at the end
struct node* insertEnd(struct node *head, int info)
{
    struct node *ptr, *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=info;
    newnode->next=NULL;
    ptr=head;
    if(ptr!=NULL)
    {
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
    }
    else
        {
            head=newnode;
        }
    return head;
}
//Display functio
void display(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head=NULL;
    head=insertEnd(head, 10);
    head=insertEnd(head, 20);
    head=insertEnd(head, 30);
    printf("\nBefore insertion ");
    display(head);
    head=insertEnd(head, 100);
    printf("\nAfter insertion ");
    display(head);
    return 0;
}
