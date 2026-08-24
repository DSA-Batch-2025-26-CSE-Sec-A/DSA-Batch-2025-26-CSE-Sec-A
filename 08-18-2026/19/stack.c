#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int val)
{
    if (top == MAX - 1)
    {
        printf("Overflow\n");
        return;
    }

    stack[++top] = val;
}

int pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
        return -1;
    }

    return stack[top--];
}

void peek()
{
    if (top == -1)
    {
        printf("The stack is empty\n");
        return;
    }

    printf("Top element = %d\n", stack[top]);
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("The stack is empty\n");
        return;
    }

    printf("Stack elements are:\n");

    for (i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice, val;

    printf("\nEnter what you want to do:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Display\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &val);
            push(val);
            break;

        case 2:
            val = pop();
            if (val != -1)
                printf("Popped element = %d\n", val);
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        default:
            printf("Wrong input\n");
    }

    return 0;
}