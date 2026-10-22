
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

// Push an element
void push(int value) {
    struct node *newNode;

    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;

    printf("%d pushed into stack.\n", value);
}

// Pop an element
void pop() {
    struct node *temp;

    if (top == NULL) {
        printf("Stack Underflow!\n");
        return;
    }

    temp = top;
    printf("Popped element: %d\n", top->data);

    top = top->next;
    free(temp);
}

// Peek at the top element
void peek() {
    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Top element: %d\n", top->data);
}

// Display the stack
void display() {
    struct node *temp = top;

    if (top == NULL) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack elements: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                while (top != NULL)
                    pop();
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
