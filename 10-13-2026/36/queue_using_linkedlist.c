
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

// Insert an element
void enqueue(int value) {
    struct node *newNode;

    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }

    printf("%d inserted into queue.\n", value);
}

// Delete an element
void dequeue() {
    struct node *temp;

    if (front == NULL) {
        printf("Queue Underflow!\n");
        return;
    }

    temp = front;
    printf("Deleted element: %d\n", front->data);

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    free(temp);
}

// View the front element
void peek() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Front element: %d\n", front->data);
}

// Display the queue
void display() {
    struct node *temp = front;

    if (front == NULL) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                while (front != NULL)
                    dequeue();
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
