#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int value) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = value;
    newnode->next = NULL;

    if (front == NULL) {
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }

    printf("%d inserted\n", value);
}

void dequeue() {
    struct node *temp;

    if (front == NULL) {
        printf("Queue is Empty\n");
    } else {
        temp = front;
        printf("%d deleted\n", front->data);

        front = front->next;

        if (front == NULL) {
            rear = NULL;
        }

        free(temp);
    }
}

void display() {
    struct node *temp = front;

    if (front == NULL) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue: ");

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}

