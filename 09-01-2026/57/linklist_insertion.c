#include<stdio.h>
#include<malloc.h>
struct node{
	int data;
	struct node *next;
};
struct node *h=NULL;
void insbeg(){
	struct node *n=(struct node*)malloc(sizeof(struct node));
	if(h==NULL){
		h=n;
		printf("\nEnter data:");
		scanf("%d",&n->data);
		n->next=NULL;
	}
	else{
		struct node *t=n;
		t->next=h;
		h=t;
		printf("\nEnter data:");
		scanf("%d",&h->data);	
	}
}
void insend(){
	struct node *n=(struct node*)malloc(sizeof(struct node));
	if(h==NULL){
		h=n;
		printf("\nEnter data:");
		scanf("%d",&n->data);
		n->next=NULL;
	}
	else{
		struct node *t=h;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=n;
		printf("\nEnter data:");
		scanf("%d",&n->data);
		n->next=NULL;
	}
}
void disp(){
	struct node *t=h;
	while(t!=NULL){
		printf("%d ",t->data);
		t=t->next;
	}
}
int main(){
	insbeg();
	insbeg();
	insend();
	insend();
	insend();
	insbeg();
	disp();
}













