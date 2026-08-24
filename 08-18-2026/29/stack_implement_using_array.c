#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

/* Check whether stack is empty */
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

/* Check whether stack is full */
int isFull()
{
    if (top == MAX - 1)
        return 1;
    else
        return 0;
}

/* Insert an element */
void push(int value)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

/* Delete the top element */
void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

/* Display the top element */
void peek()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Top element = %d\n", stack[top]);
    }
}

/* Display all elements */
void display()
{
    int i;

    if (isEmpty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

/* Main function */
int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Check Empty\n");
        printf("6. Check Full\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
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
                if (isEmpty())
                    printf("Stack is Empty\n");
                else
                    printf("Stack is Not Empty\n");
                break;

            case 6:
                if (isFull())
                    printf("Stack is Full\n");
                else
                    printf("Stack is Not Full\n");
                break;

            case 7:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
