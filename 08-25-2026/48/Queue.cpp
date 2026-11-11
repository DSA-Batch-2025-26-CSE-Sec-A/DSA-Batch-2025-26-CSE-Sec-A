#include <iostream>

using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Insert an element into the queue
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        cout << "Queue Overflow!" << endl;
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << value << " inserted into the queue." << endl;
    }
}

// Delete an element from the queue
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        cout << queue[front] << " deleted from the queue." << endl;
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
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Front element = " << queue[front] << endl;
    }
}

// Display all elements
void display()
{
    if (front == -1)
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

// Main function
int main()
{
    int choice, value;

    while (true)
    {
        cout << "\n--- QUEUE MENU ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
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
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
