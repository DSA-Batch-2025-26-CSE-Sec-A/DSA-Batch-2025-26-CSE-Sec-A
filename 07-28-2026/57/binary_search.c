#include<stdio.h>
int main(){
    int n,high,low,x,mid;
    
    int arr[]={1,2,3,4,5,6};
    n=sizeof(arr)/sizeof(arr[0]);
    printf("enter the elemnts to search:");
    scanf("%d",&x);
    low=0;
    high=n-1;
    mid=(high+low)/2;
    while(arr[mid]!=x && low<high){
        if(arr[mid]>x){
            high=mid-1;
        }else if(arr[mid]<x){
            low=mid+1;
        }
        mid=(high+low)/2;
    }
    if(arr[mid]==x){
        printf("element found at index %d",mid);
    }
    else{
        return -1;
    }
    return 0;
}
