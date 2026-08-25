#include<iostream>
using namespace std;
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (front == -1)
    front = 0;
rear++;
queue[rear] = value;
cout << value << " inserted" << endl;
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << queue[front] << " deleted" << endl;
    front++;
    if(front > rear)
    {
        front = -1;
        rear = -1;
    }
}
void peek()
{
    if (front == -1)
    cout << "Queue is empty" << endl;
else
   cout << "Front = " << queue[front] << endl;
}
void display()
{
    if (front == -1)
    {
        cout << "Queue is empty" << endl;
        return ;
    }
    cout << "Queue:";
    for (int i = front;i <= rear; i++)
    cout << queue[i] << " ";
cout << endl;
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    peek();

    return 0;
}
