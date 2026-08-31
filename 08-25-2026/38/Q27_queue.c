#include<stdio.h>
#define MAX 5 //can take max 5 values
int arr[MAX];
int front=-1;
int rear=-1;

//enqueue= adding a new piece of data(to the back of the queue)
void enqueue(){
    int val;
    if(rear==MAX-1){ //0,1,2,3,4 =5
        printf("Queue full!\n");
        return;
    }else{
        printf("Enter value: ");
        scanf("%d",&val);
        if(front==-1){
            front=0;
        } //initially
        rear++;
        arr[rear]=val;
        printf("Value %d is put into the queue.\n ",val);
    }
}

//dequeue= removing data from the queue(from the front)
void dequeue(){
    if(front==-1||front>rear){
        printf("Queue underflow!\n");
    }else{
        printf("value %d is dequeued\n",arr[front]);
        front++;

        if(front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

//peek()/fornt()= looking at data currently at the fornt without actually removing it
void peek(){
    if(front==-1||front>rear){
        printf("Nothing to peek, queue is empty\n");
    }else{
        printf("front has the value: %d\n",arr[front]);
    }
}

int main(){
    int n;
    char ans;
    while(1){
        printf("\n-----choose-----\n");
        printf("1.enqueue\n");
        printf("2.dequeue\n");
        printf("3.peek\n");
        printf("4.exit\n");
        printf("Enter from menu: ");
        scanf("%d",&n);
        switch(n){
            case 1 : enqueue();
            break;
            case 2 : dequeue();
            break;
            case 3 : peek();
            break;
            case 4 :
            printf("Exiting...thank you!");
            return 0;
            default:
            printf("Invalid number");

        }
    }
}
