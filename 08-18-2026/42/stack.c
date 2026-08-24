#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
// Push operation
void push(int value) {
    if(top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
        printf("%d pushed to stack\n", value);
    }
}
// Pop operation
int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}
// Peek operation
int peek() {
    if(top == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return stack[top];
    }
}
// Display stack elements
void display() {
    if(top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for(int i = 0; i <= top; i++)
            printf("%d ", stack[i]);
        printf("\n");
    }
}
int main() {
    push(10);
    push(20);
    push(30);
    display();
    printf("Popped element: %d\n", pop());
    printf("Top element: %d\n", peek());
    display();
    return 0;
}
