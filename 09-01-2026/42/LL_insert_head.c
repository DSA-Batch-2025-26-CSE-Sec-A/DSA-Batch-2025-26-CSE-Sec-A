#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    struct node *next;
};

void insertLL_head(struct node **head) {
    char dt;
    printf("Enter character: ");

    if (scanf(" %c", &dt) != 1) {
        printf("Invalid input.\n");
        return;
    }

    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = dt;
    n->next = *head;
    *head = n;
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

    insertLL_head(&h);
    insertLL_head(&h);
    insertLL_head(&h);
    insertLL_head(&h);

    printf("\nLinked List contents:\n");
    displayLL(h);

    return 0;
}
