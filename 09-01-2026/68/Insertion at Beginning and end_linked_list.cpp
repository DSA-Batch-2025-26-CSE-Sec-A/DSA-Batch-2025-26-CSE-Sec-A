#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* newNode;
    Node* temp;

    int n, value, i;

    cout << "Enter number of nodes: ";
    cin >> n;

    
    for (i = 0; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> value;

        newNode = new Node();

        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }
    cout << "\nOriginal Linked List: ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";


   
    cout << "\nEnter value to insert at beginning: ";
    cin >> value;

    newNode = new Node();

    newNode->data = value;
    newNode->next = head;

    head = newNode;

    cout << "After insertion at beginning: ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";

    cout << "\nEnter value to insert at end: ";
    cin >> value;

    newNode = new Node();

    newNode->data = value;
    newNode->next = NULL;

    temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;

    cout << "After insertion at end: ";

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";

    return 0;
}
