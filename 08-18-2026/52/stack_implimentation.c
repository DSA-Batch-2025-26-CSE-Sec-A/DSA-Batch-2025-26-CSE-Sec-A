#include<stdio.h>
int stack[20],top=-1;
void push()
{
	if (top==20-1)
		printf("overflow.");
	else
		scanf("%d",&stack[++top],printf("Enter data:"));
}
void pop()
{
	if(top==-1)
		printf("\nUnderflow");
	else
		printf("\n%d deleted",stack[top--]);
}
void disp()
{
	int i;
	if(top==-1)
		printf("\nEmpty");
	else
	{
		for(i=top;i>=0;i--)
			printf("\n%d",stack[i]);
	}
}
int main()
{
	printf("\n1. push\n2. pop\n3. Disp\n0. Exit");
	while(1)
	{
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