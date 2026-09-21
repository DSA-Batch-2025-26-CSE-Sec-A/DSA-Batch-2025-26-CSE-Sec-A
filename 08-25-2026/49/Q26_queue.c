#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Insert an element into the queue
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow!\n");
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        printf("%d inserted into the queue.\n", value);
    }
}

// Delete an element from the queue
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow!\n");
    }
    else
    {
        printf("%d deleted from the queue.\n", queue[front]);
        front++;

        // Reset queue when it becomes empty
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

// Display the front element
void peek()
{
    if (front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Front element = %d\n", queue[front]);
    }
}

// Display all elements
void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Queue elements: ");

        for (i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }

        printf("\n");
    }
}

// Main function
int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");

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
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
