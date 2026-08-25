#include <iostream>
using namespace std;

#define SIZE 5

class Queue
{
    int queue[SIZE];
    int front, rear;

public:

    Queue()
    {
        front = -1;
        rear = -1;
    }

    void enqueue(int value)
    {
        if (rear == SIZE - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << value << " inserted into queue\n";
    }

    void dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue Underflow\n";
            return;
        }

        cout << queue[front] << " deleted from queue\n";
        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

    void peek()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Front element = " << queue[front] << endl;
    }

    void display()
    {
        if (front == -1)
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.peek();

    q.dequeue();
    q.dequeue();

    q.display();

    q.peek();

    return 0;
}
