#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    int n, x;
    Node* head = NULL;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> x;

        Node* p = new Node{x, head};
        head = p;
    }

    cout << "Enter value to insert: ";
    cin >> x;

    Node* p = new Node{x, head};
    head = p;

    cout << "List: ";
    p = head;

    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}