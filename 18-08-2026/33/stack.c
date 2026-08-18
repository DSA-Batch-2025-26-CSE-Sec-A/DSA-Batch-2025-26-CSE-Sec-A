#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Function to check if stack is full
int isFull() {
    return top == MAX - 1;
}

// Function to check if stack is empty
int isEmpty() {
    return top == -1;
}

// Function to push an element
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        stack[++top] = value;
        printf("%d pushed into stack.\n", value);
    }
}

// Function to pop an element
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Stack is empty.\n");
    } else {
        printf("%d popped from stack.\n", stack[top--]);
    }
}

// Function to peek the top element
void peek() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

// Function to display stack elements
void display() {
    int i;
    if (isEmpty()) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

// Main function
int main() {
    int choice, value;

    while (1) {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Check if Empty\n");
        printf("6. Check if Full\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
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
                if (isEmpty())
                    printf("Stack is empty.\n");
                else
                    printf("Stack is not empty.\n");
                break;

            case 6:
                if (isFull())
                    printf("Stack is full.\n");
                else
                    printf("Stack is not full.\n");
                break;

            case 7:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}