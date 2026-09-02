#include<stdio.h>
#include<stdlib.h>
void insert_at_first(char item);
void insert_at_last(char item);
struct node{
        char key;
        struct node *link;
    };
    struct node *head;
    struct node *new_node;
    struct node *temp ;
   
    int main(){
    // struct node{
    //     char key;
    //     struct node *link;
    // };
    // struct node *head;
    head=NULL;
    // struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->key='A';
    new_node->link=NULL;
    head =new_node;
    temp =head;
    while(temp->link != NULL){
        temp=temp->link;
    }
    new_node=(struct node*)malloc(sizeof(struct node));
    temp->link=new_node;
    new_node->key='N';
    new_node->link=NULL;


    temp=head;
    while(temp->link != NULL){
        temp=temp->link;
    }
    new_node=(struct node*)malloc(sizeof(struct node));
    temp->link=new_node;
    new_node->key='K';
    new_node->link=NULL;

    temp=head;
    while(temp->link != NULL){
        temp=temp->link;
    }
    new_node=(struct node*)malloc(sizeof(struct node));
    temp->link=new_node;
    new_node->key='A';
    new_node->link=NULL;

    temp=head;
    while(temp->link != NULL){
        temp=temp->link;
    }
    new_node=(struct node*)malloc(sizeof(struct node));
    temp->link=new_node;
    new_node->key='N';
    new_node->link=NULL;


    temp=head;
     while(temp!=NULL){
        printf("%c->",temp->key);
        temp=temp->link;
     }
     printf("NULL\n");
//INSRETION AT FIRST______
    insert_at_first('R');
     temp=head;
     printf("==AFTER INSERTION AT FIRST==\n ");
     while(temp!=NULL){
        printf("%c->",temp->key);
        temp=temp->link;
     }
     printf("NULL\n");

//INSRETION AT LAST______
insert_at_last('Y');
temp=head;
printf("==AFTER INSERTION AT LAST==\n ");
 while(temp!=NULL){
        printf("%c->",temp->key);
        temp=temp->link;
     }
     printf("NULL\n");

     return 0;
    
}

void insert_at_first(char item){
    if(head==NULL){
        return ;
    }
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->link=head;
    new_node->key=item;
    head=new_node;
}
void insert_at_last(char item){
    if(head==NULL){
        return ;
    }
    temp=head;
    while(temp->link != NULL){
        temp=temp->link;
    }
    new_node=(struct node*)malloc(sizeof(struct node));
    temp->link=new_node;
    new_node->key=item;
    new_node->link=NULL;
    
}