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
    Node* temp = NULL;
    Node* new_node;

    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        new_node = new Node();

        cout<<"Enter data: ";
        cin>>new_node->data;
        new_node->next = NULL;

        if(head == NULL)
        {
            head = new_node;
            temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }
    }
    cout<<"Original Linked List"<<endl;
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    int choice;
    cout<<"Enter where to Insert"<<endl;
    cout<<"1. Beginning"<<endl;
    cout<<"2. End"<<endl;
    cout<<"Choose your option"<<endl;
    cin>>choice;
    
    new_node = new Node();
    cout<<"Enter data to insert: ";
    cin>>new_node->data;

    new_node->next = NULL;

    if(choice == 1)
    {
        new_node->next = head;
        head = new_node;
    }
    else if(choice == 2)
    {
        temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        
        temp->next = new_node;
    }
    else
        cout<<"Invalid Input!";

    cout<<"Updated Linked List"<<endl;
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}
