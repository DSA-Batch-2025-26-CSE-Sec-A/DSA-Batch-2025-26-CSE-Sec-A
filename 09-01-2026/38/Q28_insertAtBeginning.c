#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void insertAtBeginning(struct Node **head,int value){
    struct Node *newNode;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=*head;
    *head=newNode;
}

void display(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d -> ",temp->data);
        temp=temp->next;
    }

    printf("NULL\n");
}

int main(){
    struct Node *head = NULL;
    insertAtBeginning(&head,1);
    insertAtBeginning(&head,99);

    printf("Before inserting: ");
    display(head);

    insertAtBeginning(&head,38);
    insertAtBeginning(&head,5);
    insertAtBeginning(&head,200);
    printf("After inserting: ");
    display(head);
    return 0;
}
