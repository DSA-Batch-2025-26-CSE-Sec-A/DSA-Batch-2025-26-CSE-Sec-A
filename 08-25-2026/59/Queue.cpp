#include<stdio.h>
#define N 5
int Q[N];
int F=-1,R=-1;
int isfull(){
	if(R==N-1){
		return 1;
	}
	else{
		return 0;
	}
}
void enqueue(int x){
	if(isfull())
	{
		printf("Queue is overflow");
	}
	else{
		if(R==-1){
			R=F=0;
			Q[R]=x;
		}
		else{
			R++;
			Q[R]=x;
		}
	}
}
int isempty(){
	if(F==-1){
		return 1;
	}
	else{
		return 0;
	}
}
int dequeue(){
	int y;
	if(isempty()){
		printf("Queue is underflow");
	}
	else{
		y=Q[F];
		if(F==R){
			F=R=-1;
		}
		else{
			F++;
			return y;
		}
	}
}
void display()
{
    int i;
    if(F==-1||F>R)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        printf("Queue elements: ");
        for (i=F;i<=R;i++)
        {
            printf("%d ",Q[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice,x,y;
    while (1)
    {
        printf("\n--- QUEUE MENU ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
               printf("Enter value: ");
               scanf("%d" ,&x);
               enqueue(x);
               break;
            case 2:
                y=dequeue();
                if(y!=-1){
                 printf("Deleted value = %d\n", y);
				}
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
