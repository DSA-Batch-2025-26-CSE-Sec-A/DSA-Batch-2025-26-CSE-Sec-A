#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = *head_ref;
    *head_ref = newNode;
}


void insertAtEnd(struct Node** head_ref, int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

   
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }

    
    struct Node* temp = *head_ref;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}


void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL; 

   
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 25);
  
    printf("Linked List: ");
    printList(head); 

    return 0;
}
