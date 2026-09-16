#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insertEnd(struct node *head,int info)
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
struct node *deleteStart(struct node *head)
{
    struct node *temp;
    if(head==NULL)
    {
        printf("List is Empty ");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    return head;
};
struct node *deleteEnd(struct node *head)
{
    struct node *ptr, *temp;
    if(head==NULL)
    {
        printf("List is Empty ");
    }
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
    }
    else
    {
        ptr=head;
        while(ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        temp=ptr->next;
        ptr->next=NULL;
        free(temp);
    }
    return head;
};
struct node *deleteBefore(struct node *head,int value)
{
    struct node *ptr, *temp;
    if(head==NULL || head->next==NULL)
    {
        printf("Deletion will not take place ");
    }
    else if(head->next->data==value)
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    else
    {
        ptr=head;
        while(ptr->next->next!=NULL && ptr->next->next->data!=value)
        {
            ptr=ptr->next;
        }
        if(ptr->next->next!=NULL)
        {
            temp=ptr->next;
            ptr->next=temp->next;
            free(temp);
        }
    }
    return head;
};
struct node *deleteAfter(struct node *head,int value)
{
    struct node *ptr, *temp;
    ptr=head;
    while(ptr!=NULL && ptr->data !=value)
    {
        ptr=ptr->next;
    }
    if(ptr!=NULL && ptr->next!=NULL)
    {
        temp=ptr->next;
        ptr->next=temp->next;
        free(temp);
    }
    return head;
};
struct node *deletePosition(struct node *head, int value)
{
    struct node *ptr, *temp;
    if(head==NULL)
    {
        printf("List is Empty");
    }
    else if(head->data==value)
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    else
    {
        ptr=head;
        while(ptr->next!=NULL && ptr->next->data!=value)
        {
            ptr=ptr->next;
        }
        if(ptr->next!=NULL)
        {
            temp=ptr->next;
            ptr->next=temp->next;
            free(temp);
        }
    }
    return head;
};
void display(struct node *head)
{
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}
int main()
{
    struct node *head=NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    head = insertEnd(head, 90);
    head = insertEnd(head, 100);
    printf("List is ");
    display(head);
    head=deleteStart(head);
    printf("\nAfter deletion from start ");
    display(head);
    head=deleteEnd(head);
    printf("\nAfter deletion from end ");
    display(head);
    head=deleteBefore(head, 90);
    printf("\nAfter deletion node before 90 ");
    display(head);
    head=deleteAfter(head, 10);
    printf("\nAfter deletion node after 10 ");
    display(head);
    head=deletePosition(head, 30);
    printf("\nAfter deletion node before 30 ");
    display(head);
    return 0;
}
