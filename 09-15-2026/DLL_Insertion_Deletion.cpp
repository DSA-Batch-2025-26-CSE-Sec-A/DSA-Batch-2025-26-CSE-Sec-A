#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *pre;
    struct node *next;
    int data;
};
struct node *head = NULL, *tail = NULL;
void infirst()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data in first: ");
    scanf("%d", &newnode->data);
    newnode->pre = NULL;
    newnode->next = head;
    if(head == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        head->pre = newnode;
        head = newnode;
    }
}
void inend()
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data in end: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->pre = tail;
    if(tail == NULL)
    {
        head = tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}
void inafter()
{
    int value;
    struct node *temp, *newnode;
    printf("Enter the value after which to insert: ");
    scanf("%d", &value);
    temp = head;
    while(temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Node not found\n");
        return;
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->pre = temp;
    newnode->next = temp->next;
    if(temp->next != NULL)
        temp->next->pre = newnode;
    else
        tail = newnode;
    temp->next = newnode;
}
void inbefore()
{
    int value;
    struct node *temp, *newnode;
    printf("Enter the value before which to insert: ");
    scanf("%d", &value);
    temp = head;
    while(temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Node not found\n");
        return;
    }
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = temp;
    newnode->pre = temp->pre;

    if(temp->pre != NULL)
        temp->pre->next = newnode;
    else
        head = newnode;

    temp->pre = newnode;
}
void inposition()
{
    int pos, i;
    struct node *temp, *newnode;
    printf("Enter position: ");
    scanf("%d", &pos);

    if(pos == 1)
    {
        infirst();
        return;
    }
    temp = head;

    for(i = 1; i < pos-1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Invalid position\n");
        return;
    }
    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->pre = temp;
    newnode->next = temp->next;

    if(temp->next != NULL)
        temp->next->pre = newnode;
    else
        tail = newnode;

    temp->next = newnode;
}
void delfrombeg()
{
    struct node *temp;
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    temp = head;
    if(head == tail)
    {
        head = tail = NULL;
    }
    else
    {
        head = head->next;
        head->pre = NULL;
    }

    free(temp);
}
void delfromend()
{
    struct node *temp;
    if(tail == NULL)
    {
        printf("List is empty\n");
        return;
    }
    temp = tail;
    if(head == tail)
    {
        head = tail = NULL;
    }
    else
    {
        tail = tail->pre;
        tail->next = NULL;
    }

    free(temp);
}
void delfrompos()
{
    int pos, i = 1;
    struct node *temp;
    printf("Enter position: ");
    scanf("%d", &pos);
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    if(pos == 1)
    {
        delfrombeg();
        return;
    }

    temp = head;

    while(i < pos && temp != NULL)
    {
        temp = temp->next;
        i++;
    }

    if(temp == NULL)
    {
        printf("Invalid position\n");
        return;
    }

    if(temp == tail)
    {
        delfromend();
        return;
    }

    temp->pre->next = temp->next;
    temp->next->pre = temp->pre;

    free(temp);
}
void delnode()
{
    int value;
    struct node *temp;

    printf("Enter value to delete: ");
    scanf("%d", &value);
    temp = head;
    while(temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Node not found\n");
        return;
    }
    if(temp == head)
    {
        delfrombeg();
    }
    else if(temp == tail)
    {
        delfromend();
    }
    else
    {
        temp->pre->next = temp->next;
        temp->next->pre = temp->pre;
        free(temp);
    }
}
void delbefore()
{
    int value;
    struct node *temp, *del;
    printf("Enter value before which to delete: ");
    scanf("%d", &value);
    temp = head;
    while(temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Node not found\n");
        return;
    }
    if(temp == head)
    {
        printf("No node exists before this node\n");
        return;
    }
    del = temp->pre;

    if(del == head)
    {
        delfrombeg();
    }
    else
    {
        del->pre->next = temp;
        temp->pre = del->pre;
        free(del);
    }
}
void delafter()
{
    int value;
    struct node *temp, *del;

    printf("Enter value after which to delete: ");
    scanf("%d", &value);

    temp = head;

    while(temp != NULL && temp->data != value)
    {
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Node not found\n");
        return;
    }

    if(temp == tail)
    {
        printf("No node exists after this node\n");
        return;
    }

    del = temp->next;

    if(del == tail)
    {
        delfromend();
    }
    else
    {
        temp->next = del->next;
        del->next->pre = temp;
        free(del);
    }
}
void display()
{
    struct node *temp = head;
    printf("Doubly Linked List: ");
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}
int main()
{
    int choice = 1;
    while(choice != 0)
    {
        printf("\n========== DOUBLY LINKED LIST ==========\n");
        printf("\n----- INSERTION -----\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert after a given node\n");
        printf("4. Insert before a given node\n");
        printf("5. Insert at a given position\n");
        printf("\n----- DELETION -----\n");
        printf("6. Delete from beginning\n");
        printf("7. Delete from end\n");
        printf("8. Delete a given node\n");
        printf("9. Delete before a given node\n");
        printf("10. Delete after a given node\n");
        printf("11. Delete from position\n");
        printf("\n----- OTHER -----\n");
        printf("12. Display\n");
        printf("0. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                infirst();
                break;
            case 2:
                inend();
                break;
            case 3:
                inafter();
                break;
            case 4:
                inbefore();
                break;
            case 5:
                inposition();
                break;
            case 6:
                delfrombeg();
                break;
            case 7:
                delfromend();
                break;
            case 8:
                delnode();
                break;
            case 9:
                delbefore();
                break;
            case 10:
                delafter();
                break;
            case 11:
                delfrompos();
                break;
            case 12:
                display();
                break;
            case 0:
                printf("\nProgram ended.\n");
                break;
            default:
                printf("\nInvalid choice!\n");
        }
    }
    return 0;
}
