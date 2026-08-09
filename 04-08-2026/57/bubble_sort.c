#include<stdio.h>
void bubble_sort(int arr[],int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}
int main(){
    int n=5;
    int arr[]={8,9,7,6,1};
    bubble_sort(arr,n);
    print(arr,n);
    return 0;
}
