#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref;
    
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        printf("New node inserted at end: %d\n", new_node->data);
        printf("Previous node was: NULL (List was empty)\n");
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;

    printf("New node inserted at end: %d\n", new_node->data);
    printf("Previous node was: %d\n", last->data);
}

void printList(struct Node* node) {
    printf("Current List: ");
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n\n");
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    printList(head);

    insertAtEnd(&head, 20);
    printList(head);

    insertAtEnd(&head, 30);
    printList(head);

    return 0;
}