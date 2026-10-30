#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;

};
struct stack *push(struct stack *top,int info)
{
    struct stack *newnode;
    newnode=(struct stack *)malloc(sizeof(struct stack));
    if(newnode==NULL)
    {
        printf("Stack Overflow\n ");
    }
    else if(top==NULL)
    {
        newnode->data=info;
        newnode->next=NULL;
        top=newnode;
    }
    else
    {
        newnode->data=info;
        newnode->next=top;
        top=newnode;
    }
    return top;
}
struct stack *pop(struct stack *top)
{
    struct stack *ptr;
    if(top==NULL)
        printf("List is already empty\n ");
    else
    {
        ptr=top;
        printf("Deleted element is %d\n ",ptr->data);
        top=top->next;
        free(ptr);
    }
    return top;
};
void display(struct stack *top)
{
    struct stack *temp;
    if(top==NULL)
    {
        printf("Stack is empty ");
    }
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    struct stack *top=NULL;
    int choice,info;
    while(1)
    {
        printf("\n1.PUSH\n");
        printf("2.POP\n");
        printf("3.DISPLAY\n");
        printf("4.EXIT\n");
        printf("Enter a choice ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter data ");
                scanf("%d", &info);
                top=push(top, info);
                break;
            case 2:
                top=pop(top);
                break;
            case 3:
                display(top);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n ");
        }
    }
    return 0;
}
