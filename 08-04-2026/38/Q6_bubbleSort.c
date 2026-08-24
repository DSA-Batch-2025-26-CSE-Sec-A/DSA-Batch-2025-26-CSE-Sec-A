#include<stdio.h>
int main(){
    int arr[50],n,i,j,temp;
    printf("Enter number of element your array will have for bubble sort:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j]; //for example [7,5] stores 7
                arr[j]=arr[j+1]; //replace 7 with 5 i.e now it becomes [5,5] hence 7 gets deleted
                arr[j+1]=temp; //but we already stored 7 in temp hence [5,7]
            }
        }
    }

    printf("The sorted array is:");
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}
