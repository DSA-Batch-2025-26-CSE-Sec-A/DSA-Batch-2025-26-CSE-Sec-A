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
    printf("\nitem:%d present in index no. %d",item, Binary_search(A,l,h,item));
   
    return 0;
}
int  Binary_search(int A[],int l,int h,int item){

    int mid=(l+h)/2;
    if(A[mid]==item){
      return mid;
    }
    if(l>h){
        printf("Unsuccesfull search");
        
    }
    if(item>A[mid]){
        l=mid+1;
       return Binary_search(A,l,h,item);
             
    }
    else{
        h=mid-1;
        return Binary_search(A,l,h,item);
    }  

}