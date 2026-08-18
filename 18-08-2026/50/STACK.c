#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
	if(top==size-1){
		printf("Stack Overflow\n");
	}
	else{
		top++;
		stack[top]=value;
		printf("%d push into stack\n",value);
	}
}
void pop()
{
	if(top==-1){
		printf("Stack underflow\n");
	}
	else{
		printf("%d popped from stack\n",stack[top]);
		top--;
	}
}
void display(){
	int i;
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("Stack elements are:\n");
		for(i=top;i>=0;i--){
			printf("%d\n",stack[i]);
		}
	}
}
int main()
{
	int choice,value;
	while(1){
		printf("\n1. PUSH");
		printf("\n2. POP");
		printf("\n3. DISPLAY");
		printf("\n4. EXIT");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter value:");
				scanf("%d",&value);
				push(value);
				break;
				case 2:
					pop();
					break;
					case 3:
						display();
						break;
						case 4:
							return 0;
							default :
								printf("\n Envalid choice.");
				}
		}
	}
