#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void insertAtEnd(struct Node **head,int value){
    struct Node *newNode;
    struct Node *temp;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    if(*head==NULL){
        *head= newNode;
        return;
    }
    temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
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
    insertAtEnd(&head,55);
    insertAtEnd(&head,9);

    printf("Before inserting: ");
    display(head);

    insertAtEnd(&head,5);
    insertAtEnd(&head,20);
    printf("After inserting: ");
    display(head);
    return 0;
}

