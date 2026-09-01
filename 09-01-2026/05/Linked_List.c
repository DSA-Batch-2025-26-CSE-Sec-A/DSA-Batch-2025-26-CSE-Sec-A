#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
void insertAtPosition(struct node **head, int data, int position) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    if (position == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct node *current = *head;
    for (int i = 0; i < position - 1 && current != NULL; i++) {
        current = current->next;
    }
    if (current == NULL) {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }
    newNode->next = current->next;
    current->next = newNode;
}
void displayList(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main() {
    struct node *head = NULL;

    insertAtPosition(&head, 10, 0); 
    insertAtPosition(&head, 20, 1); 
    insertAtPosition(&head, 30, 1); 
    insertAtPosition(&head, 40, 3); 

    displayList(head); 
    return 0;
}