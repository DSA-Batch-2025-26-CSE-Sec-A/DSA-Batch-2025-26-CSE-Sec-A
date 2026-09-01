#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *next;
};

void insertLL_tail(struct node **head, struct node **tail) {
    char dt;
    struct node *n = NULL;

    printf("Enter character: ");
    if (scanf(" %c", &dt) != 1) {
        printf("Invalid input.\n");
        return;
    }

    n = (struct node *)malloc(sizeof(struct node));

    n->data = dt;
    n->next = NULL;

    if (*head == NULL) {
        *head = n;
        *tail = n;
    } else {
        (*tail)->next = n;
        *tail = n;
    }
}

void displayLL(struct node *head) {
    struct node *temp = head;
    while (temp != NULL) {
        printf("%c\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    struct node *h = NULL;
    struct node *t = NULL;

    insertLL_tail(&h, &t);
    insertLL_tail(&h, &t);
    insertLL_tail(&h, &t);
    insertLL_tail(&h, &t);

    printf("\nLinked List contents:\n");
    displayLL(h);

    return 0;
}
