#include<stdio.h>
int queue[5],rear=-1;
void push(){
	if(rear==5-1)
		printf("\n Overflow.");
	else{
		printf("Enter data:");
		scanf("%d",&queue[++rear]);
	}
}
void pop(){
	if(rear==-1)
		printf("Under flow");
	else {
		printf("\n%d deleted ",queue[0]);
		int i;
		for(i=0;i<rear;i++)
			queue[i]=queue[i+1];
		rear--;
	}
}
void disp()
{
	if(rear==-1)
		printf("\nEmpty");
	else
	{
		int i;
		for(i=0;i<=rear;i++)
			printf("%d ",queue[i]);
	}
}
int main(){
	printf("\n1. push\n2. pop\n3. disp\n0. Exit\n");
	
	
	while (1){
		int ch;
		printf("\nEnter choice:");
		scanf("%d",&ch);
		if(ch==1) push();
		else if(ch==2) pop();
		else if(ch==3) disp();
		else if(ch==0) break;
		else printf("\nInvalid choice.");
	}
	
}
