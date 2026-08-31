#include<stdio.h>

int cq[5],f=-1,r=-1;
void push()
{
	if((r+1)%5==f)
		printf("\nOverflow");
	else
	{
		if(f==-1)f=0;
		r=(r+1)%5; //circular increment
		printf("\nEnter data:");
		scanf("%d",&cq[r]);
	}
}
void pop()
{
	if(f==-1)
		printf("\nUnderflow");
	else if(f==r)
	{
		printf("\n%d is deleted",cq[f]);
		f=-1;
		r=-1;
	}
	else 
	{
		printf("\n%d is deleted",cq[f]);
		f=(f+1)%5;
	}
}
void disp()
{
	int i;
	if(f==-1)
		printf("\nEmpty");
	else
	{
		for(i=f;i!=r;i=(i+1)%5)
			printf("%d->%d ",i,cq[i]);
		printf("%d->%d ",r,cq[r]);
	}
}
int main()
{
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
