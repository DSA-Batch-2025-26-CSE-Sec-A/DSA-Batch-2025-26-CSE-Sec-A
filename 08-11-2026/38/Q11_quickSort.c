#include<stdio.h>
int twoPointers(int arr[],int low, int high){
    int pivot= arr[low]; // 0th index element as pivot for first case
    int i= low;
    int j= high;
    int temp=0;

    while(i<j){
        while(arr[i]<=pivot && i<= high-1){
            i++;
        }
        while(arr[j]>=pivot && j>=low+1){
            j--;
        }
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp= arr[low];
    arr[low]= arr[j];
    arr[j]= temp;
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low<high) {
        int pIndex =twoPointers(arr,low,high);
        quickSort(arr,low,pIndex - 1);
        quickSort(arr,pIndex + 1,high);
    }
}

int main(){
    int arr[20],i,j,n;
    printf("Enter how many value your array will have:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element at %d index:",i);
        scanf("%d",&arr[i]);
    }

    quickSort(arr, 0, n - 1);
    printf("The sorted array is:");
    for (i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
