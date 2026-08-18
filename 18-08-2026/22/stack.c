#include<stdio.h>
#define MAX 100
int top=-1;
int stack[MAX];

void push(int n){
	if(top>=MAX-1){
		printf("stack overflow\n");
	}
	else{
		stack[++top]=n;
		printf("pushed to stack\n");
	}
}

void pop(){
	if(top<=1)
	printf("stack underflow\n");
	else{
		
	}
}

void display(){
	if(top==-1)
	printf("no elements in stack\n");
	else{
		for(int i=0;i<=top;i++)
		printf("%d\n",stack[i]);
	}
}

int main(){
	push(30);
	push(40);
	push(50);
	push(10);
	display();
	pop();
	display();
}

