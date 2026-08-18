#include<stdio.h>
#define MAX 5 //Maximun capacity of the stack ,how many it takes that is 5 VALUES
int top= -1; //declaring globally so that all fucntion can access the same top
int stack[MAX]; //declaring the stack size globally so that all fucntion can access it

//creating function for push().
void push(int val){
    if(top==MAX -1){ //0,1,2,3,4 tot 5 hence stops at 5 i.e MAX -1;
        printf("Stack overflow, cannot push further!\n");
    }else{
        top++;
        stack[top]= val; //inserts the value
        printf("pushed %d into the stack\n",val);
    }

}

//creating function for pop().
void pop(){
    if(top==-1){
        printf("Stack underflow, Empty stack\n");
    }else{
        printf("Popped %d from the stack\n",stack[top]); //first tell which one is poped
        top--; //then decrese size
    }
}

//look at the top value without altering it
void peek(){
    if (top==-1){
        printf("The stack is empty, nothing to peek at.\n");
    }else{
        printf("The top element is: %d\n", stack[top]);
    }
}

//testing
int main(){
    int choice,val;
    while(1){
        printf("\n----Stack Operation----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter the value to push in stack: ");
                scanf("%d",&val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("Exiting the program. Thank you!\n");
                return 0;
            default:
                printf("Invalid choice! please enter between 1 to 4\n");
        }
    }

    return 0;
}


