#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n, x;
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

    cout << "Enter value to insert at end: ";
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

    cout << "List: ";
    p = head;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}
