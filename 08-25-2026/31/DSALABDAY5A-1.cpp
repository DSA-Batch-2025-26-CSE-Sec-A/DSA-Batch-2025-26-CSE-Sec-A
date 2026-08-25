#include <stdio.h>
#define MAX 100

int stack1[MAX], stack2[MAX];
int top1 = -1, top2 = -1;

void push1(int x)
{
    if (top1 == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack1[++top1] = x;
}

int pop1()
{
    return stack1[top1--];
}

void push2(int x)
{
    if (top2 == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack2[++top2] = x;
}

int pop2()
{
    return stack2[top2--];
}

void enqueue(int x)
{
    push1(x);
    printf("%d inserted into queue\n", x);
}

void dequeue()
{
    int x;

    if (top1 == -1 && top2 == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    if (top2 == -1)
    {
        while (top1 != -1)
        {
            x = pop1();
            push2(x);
        }
    }

    x = pop2();
    printf("%d deleted from queue\n", x);
}

void display()
{
    int i;

    if (top1 == -1 && top2 == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");

    for (i = top2; i >= 0; i--)
        printf("%d ", stack2[i]);

    for (i = 0; i <= top1; i++)
        printf("%d ", stack1[i]);

    printf("\n");
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("\n--- QUEUE USING STACK ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}