#include<stdio.h>
int binarySearch(int arr[],int key,int low,int high){
    int mid;
    if(low>high){ //condition for element that is not present
        return -1;
    }
    mid=(low+high)/2;
    if(arr[mid]==key){
        return mid; //returning the index where the key element is found
    }
    if(arr[mid]<key){
        return binarySearch(arr,key,mid+1,high);
    }else{
        return binarySearch(arr,key,low,mid-1);
    }
}

int main(){
    int key,arr[50],n,i;
    printf("Enter no of elements in your array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to find: ");
    scanf("%d",&key);
    int foundKeyIndex=binarySearch(arr,key,0,n-1);
    if(foundKeyIndex == -1){
        printf("The element does not exist in this array");
    }else{
        printf("Element found at index: %d",foundKeyIndex);
    }
    return 0;
}
