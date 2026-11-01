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

    cout << "Enter node value and new value: ";
    cin >> key >> x;

    if (head != NULL && head->data == key) {
        Node* newNode = new Node{x, head};
        head = newNode;
    }
    else {
        p = head;

        while (p != NULL && p->next != NULL) {
            if (p->next->data == key) {
                Node* newNode = new Node{x, p->next};
                p->next = newNode;
                break;
            }
            p = p->next;
        }
    }

    cout << "List: ";
    p = head;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}
