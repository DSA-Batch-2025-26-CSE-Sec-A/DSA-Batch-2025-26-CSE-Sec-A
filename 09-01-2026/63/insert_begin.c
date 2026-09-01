#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* old_head = *head_ref;
    
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;

    printf("New node inserted: %d\n", new_node->data);
    
    if (old_head != NULL) {
        printf("Previous head node was: %d\n", old_head->data);
    } else {
        printf("Previous head node was: NULL (List was empty)\n");
    }
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

    insertAtBeginning(&head, 10);
    printList(head);

    insertAtBeginning(&head, 20);
    printList(head);

    insertAtBeginning(&head, 30);
    printList(head);

    return 0;
}
