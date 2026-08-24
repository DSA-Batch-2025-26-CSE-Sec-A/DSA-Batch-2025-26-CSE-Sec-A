#include<stdio.h>

void binarySearch(int arr[20],int key,int size){
    int low=0,high=size-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("Number found at index %d",mid);
            return;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    printf("The number is NOT found");
}

int main(){
    int arr[20],keys,n,i;
    printf("Enter how many elements the array will have:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter which element you want to find:");
    scanf("%d",&keys);
    binarySearch(arr,keys,n);
    return 0;
}
