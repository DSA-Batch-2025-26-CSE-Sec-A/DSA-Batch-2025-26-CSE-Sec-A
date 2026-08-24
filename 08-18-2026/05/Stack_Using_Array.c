#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(){
    int value;
    if (top == MAX - 1){
        printf("Stack Overflow\n");
    }
    else{
        printf("Enter value: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}
void pop(){
    if (top == -1){
        printf("Stack Underflow\n");
    }
    else{
        printf("Deleted: %d\n", stack[top]);
        top--;
    }
}
void peek(){
    if (top == -1){
        printf("Stack is empty\n");
    }
    else{
        printf("Top = %d\n", stack[top]);
    }
}
void display(){
    int i;
    if (top == -1){
        printf("Stack is empty\n");
    }
    else{
        for (i = top; i >= 0; i--){
            printf("%d\n", stack[i]);
        }
    }
}
int main(){
    int choice;
    while (1) {
         printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if (choice == 1)
            push();
        else if (choice == 2)
            pop();
        else if (choice == 3)
            peek();
        else if (choice == 4)
            display();
        else if (choice == 5)
            break;
        else
            printf("Invalid choice\n");
    }
    return 0;
}