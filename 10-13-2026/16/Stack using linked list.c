
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void push(int value) {
    struct node *newnode;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    newnode->data = value;
    newnode->next = top;
    top = newnode;

    printf("%d pushed into stack\n", value);
}

void pop() {
    struct node *temp;

    if (top == NULL) {
        printf("Stack Underflow\n");
        return;
    }

    temp = top;
    printf("Popped element = %d\n", top->data);

    top = top->next;
    free(temp);
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
    } else {
        printf("Top element = %d\n", top->data);
    }
}

void display() {
    struct node *temp = top;

    if (top == NULL) {
        printf("Stack is empty\n");
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
    push(10);
    push(20);
    push(30);

    display();
    peek();

    pop();

    display();

    return 0;
}

