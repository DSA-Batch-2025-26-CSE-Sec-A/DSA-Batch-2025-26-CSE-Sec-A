#include<stdio.h>
int  Binary_search(int A[],int l,int h,int item);
int main(){
    int A[]={1,2,3,4,5,6,7};
    int n=sizeof(A)/4;
    int l=0;
    int h=n-1;
    int item;
    printf("search=");
    scanf("%d",&item);
    Binary_search(A,l,h,item);
   
    return 0;
}
int  Binary_search(int A[],int l,int h,int item){

    int i;
    int mid=(l+h)/2;
    while(A[mid]!=item && l<=h){
        if(item>A[mid]){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        mid=(l+h)/2;
        
    }
    if(A[mid]==item){
        printf ("succesfull search: %d present in index no.%d",item,mid);
        return 0;
    }
    else{
        printf("Unsuccesfull search\n");
    }
    
    
    

}