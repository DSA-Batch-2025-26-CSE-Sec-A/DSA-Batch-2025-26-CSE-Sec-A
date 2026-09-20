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

    // If key is the second node
    if (head != NULL && head->next != NULL &&
        head->next->data == key) {
        p = head;
        head = head->next;
        delete p;
    }
    else {
        p = head;

        while (p != NULL && p->next != NULL &&
               p->next->next != NULL) {

            if (p->next->next->data == key) {
                Node* temp = p->next;
                p->next = temp->next;
                delete temp;
                break;
            }

            p = p->next;
        }
    }

    cout << "List after deletion: ";
    p = head;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}
