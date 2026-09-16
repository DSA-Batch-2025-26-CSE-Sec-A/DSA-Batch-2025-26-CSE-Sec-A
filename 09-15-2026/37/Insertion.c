#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insertStart(struct node *head, int info)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=info;
    newnode->next=head;
    head=newnode;
    return head;
};
struct node *insertEnd(struct node *head, int info)
{
    struct node *ptr, *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
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
};
struct node *insertAfter(struct node *head,int value,int info)
{
    struct node *ptr, *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=info;
    ptr=head;
    while(ptr->data!=value && ptr!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==value)
    {
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
    return head;
};
struct node *insertBefore(struct node *head,int value,int info)
{
    struct node *ptr,*newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=info;
    if(head->data==value)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        ptr=head;
        while(ptr->next->data!=value && ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        if(ptr->next->data==value)
        {
            newnode->next=ptr->next;
            ptr->next=newnode;
        }
    }
    return head;
};
struct node *insertPosition(struct node *head,int pos,int info)
{
    struct node *ptr,*newnode;
    int i;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=info;
    if(pos==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        ptr=head;
        for(i=1;i<pos-1;i++)
        {
            ptr=ptr->next;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;
    }
    return head;
};
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
    printf("\nBefore insertion linked list ");
    display(head);
    head=insertStart(head, 90);
    printf("\nAfter insertion at beginning ");
    display(head);
    head=insertEnd(head, 100);
    printf("\nAfter insertion at end ");
    display(head);
    head=insertAfter(head, 20, 190);
    printf("\nAfter inserting 190 after 20");
    display(head);
    head=insertBefore(head, 30, 300);
    printf("\nAfter inserting 300 after 30");
    display(head);
    head=insertPosition(head, 9, 10);
    printf("\nAfter inserting 10 at 9");
    display(head);
    return 0;
}
