#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

//initially
struct Node *front= NULL;
struct Node *rear= NULL;

//enqueue
void enqueue(int val){
    struct Node* newNode;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    if (newNode==NULL){
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data=val;
    newNode->next=NULL;
    if(front==NULL){
        front=rear=newNode;
    }else{
        rear->next=newNode; //first store
        rear=newNode; //then move
    }
    printf("%d inserted into queue\n",val);

}

//dequeue
void dequeue(){
    struct Node *temp;
    if (front==NULL){
        printf("Queue underflow\n");
        return;
    }
    temp=front;
    printf("%d removed from queue\n",temp->data);
    front=front->next; //move from the current front and points to the next node
    if (front==NULL){
        rear=NULL;
    }
    free(temp);
}

//display
void display(){
    struct Node *temp;
    if (front==NULL){
        printf("Queue is empty\n");
        return;
    }
    temp=front;
    printf("Queue elements: ");
    while (temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

    printf("\n");
}

//peek
// PEEK operation
void peek(){
    if (front==NULL){
        printf("Queue is empty\n");
    }else{
        printf("Front element: %d\n",front->data);
    }
}

int main(){
    int choice,val;
    while(1){
        printf("\n1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\n");
        printf("4. PEEK\n");
        printf("5. EXIT\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                enqueue(val);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                peek();
                break;

            case 5:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
