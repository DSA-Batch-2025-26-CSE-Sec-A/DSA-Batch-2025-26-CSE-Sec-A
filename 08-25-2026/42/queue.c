#include <stdio.h>

const int MAX = 100;
int front = -1;
int rear = -1;
int queue[100];

int enqueue(int n) {
    if (rear >= MAX - 1) {
        printf("queue overflow\n");
        return 0;
    }
    if (front == -1) {
        front++;
    }
    queue[++rear] = n;
    printf("%d has been inserted into the queue\n", n);

    return 0;
}

int dequeue() {
    if (rear == -1 || front > rear) {
        printf("queue underflow\n");
        front = -1;
        rear = -1;
        return 0;
    }
    printf("the popped element is: ");
    printf("%d\n", queue[front++]);

    if (front > rear) {
        front = -1;
        rear = -1;
    }

    return 0;
}

int show() {
    if (front == -1 || rear == -1 || front > rear) {
        printf("queue empty\n");
        front = -1;
        rear = -1;
        return 0;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d\n", queue[i]);
    }
    return 0;
}

int main() {
    int choice = 3;
    while (choice != 4) {
        printf("1. enqueue\n");
        printf("2. dequeue\n");
        printf("3. show\n");
        printf("4. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                {
                    int x;
                    printf("enter element to be inserted: ");
                    scanf("%d", &x);
                    enqueue(x);
                }
                break;

            case 2:
                dequeue();
                break;

            case 3:
                show();
                break;

            default:
                break;
        }
    }
    return 0;
}