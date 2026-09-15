#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n, x, key;
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

    cout << "Enter node value: ";
    cin >> key;

    p = head;

    while (p != NULL && p->data != key)
        p = p->next;

    if (p != NULL && p->next != NULL) {
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
}