#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
struct queue *enqueue(struct queue *front, struct queue **rear, int info)
{
    struct queue *newnode;
    newnode=(struct queue *)malloc(sizeof(struct queue));
    if(newnode==NULL)
    {
        printf("Queue Overflow\n ");
    }
    else
    {
        newnode->data=info;
        newnode->next=NULL;
        if(front==NULL)
        {
            front=newnode;
            *rear=newnode;
        }
        else
        {
            (*rear)->next=newnode;
            *rear=newnode;
        }
    }
    return front;
};
struct queue *dequeue(struct queue *front, struct queue **rear)
{
    struct queue *ptr;
    if(front==NULL)
    {
        printf("Queue Underflow\n ");
    }
    else
    {
        ptr=front;
        printf("Deleted element is %d\n ", ptr->data);
        front=front->next;
        free(ptr);
        if(front==NULL)
        {
            *rear=NULL;
        }
    }
    return front;
};
void display(struct queue *front)
{
    struct queue *temp;
    if(front==NULL)
    {
        printf("Queue is empty ");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main()
{
    struct queue *front=NULL;
    struct queue *rear=NULL;
    int choice,info;
    while(1)
    {
        printf("\n1.ENQUEUE\n");
        printf("2.DEQUEUE\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter a choice ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter data ");
                scanf("%d", &info);
                front=enqueue(front, &rear, info);
                break;
            case 2:
                front=dequeue(front, &rear);
                break;
            case 3:
                display(front);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n ");
        }
    }
    return 0;
}
