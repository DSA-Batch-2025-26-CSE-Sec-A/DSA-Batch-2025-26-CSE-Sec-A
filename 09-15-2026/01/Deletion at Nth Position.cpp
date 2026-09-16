#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n, x, pos;
    Node *head = NULL, *p;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> x;

        Node* newNode = new Node{x, NULL};

        if (head == NULL)
            head = newNode;
        else {
            p = head;

            while (p->next != NULL)
                p = p->next;

            p->next = newNode;
        }
    }

    cout << "Enter position to delete: ";
    cin >> pos;

    if (pos == 1) {
        p = head;
        head = head->next;
        delete p;
    }
    else {
        p = head;

        for (int i = 1; i < pos - 1; i++)
            p = p->next;

        Node* temp = p->next;
        p->next = temp->next;
        delete temp;
    }

    cout << "List after deletion: ";
    p = head;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;

