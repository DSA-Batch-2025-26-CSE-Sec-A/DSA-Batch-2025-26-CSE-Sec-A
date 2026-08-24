#include<stdio.h>
int  linear_search(int A[],int lb,int ub,int item);
int main(){
    int A[]={4,1,2,7,5,9,8,3};
    int n=sizeof(A)/4;
    int lb=0;
    int ub=n-1;
    int item;
    printf("search=");
    scanf("%d",&item);
    linear_search(A,lb,ub,item);
   
    return 0;
}
int  linear_search(int A[],int lb,int ub,int item){

    int i;
    for(i=lb;i<=ub;i++){
        if(A[i]==item){
            printf ("succesfull search: %d present in index no.%d",item,i);
            return 0;
        }
    }
    printf("Unsuccesfull search\n");
    
}