#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

//initially
struct Node *top= NULL;

//push operation
 void push(int val){
     struct Node *newNode; //create pointer newNode that stores the address of struct node
     newNode = (struct Node*)malloc(sizeof(struct Node)); //dynamic memory allocation
     if(newNode==NULL){
        printf("Memory allocation failed\n");
        return;
     }
     newNode->data= val;
     newNode->next= top;
     top= newNode;
     printf("%d pushed into the stack\n",val);
 }

 //pop operation
 void pop(){
     struct Node *temp;
     if(top==NULL){
        printf("Stack Underflow\n");
        return;
     }
     temp=top;
     printf("Popped element: %d\n", temp->data);
     top= top->next; //i.e  back to the prev val
     free(temp);
 }

 //peek operation
 void peek(){
     struct Node *temp;
     if(top==NULL){
        printf("Stack is empty\n");
        return;
     }else{
        printf("Top element: %d\n", top->data);
     }
 }

 //display
 void display(){
    struct Node *temp;
    if (top == NULL){
        printf("Stack is empty\n");
        return;
    }
    temp = top;
    printf("Stack elements: ");
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n");
}

 int main(){
     int choice, value;
     while(1){
        printf("\n1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
 }


