#include<stdio.h>
#define max 5
int stack[max];
int top=-1;
void push(int val)
{
    if(top==max-1)
    {
        printf("Overflow\n");
        return;
    }
    else
    {
        stack[++top]=val;
        printf("%d pushed into stack\n ",val);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Empty");
    }
    else
    {
        printf("%d popped from stack\n ",stack[top]);
        top--;
    }
}
void display()
{
     int i;
     if(top==-1)
     {
         printf("Stack is Empty ");
     }
     else
     {
         printf("Stack Elements are ");
         for(i=top;i>=0;i--)
         {
             printf("%d",stack[i]);
         }
     }
}
int main()
{
    int choice, val;
    while(1)
    {
        printf("\n1. PUSH");
        printf("\n2. POP");
        printf("\n3. DISPLAY");
        printf("\n4. EXIT");
        printf("\nEnter a choice ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                printf("Enter value ");
                scanf("%d", &val);
                push(val);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Choice\n");

        }
    }
}
