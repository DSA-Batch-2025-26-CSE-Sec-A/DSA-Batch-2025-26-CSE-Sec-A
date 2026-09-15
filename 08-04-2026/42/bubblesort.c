#include<stdio.h>
int main (){
    int n;
    printf(" Enter The Array Size : ");
    scanf("%d", &n);
    printf(" Enter The Array : ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int j=0;j<n;j++){
        for(int k=0;k<n-1-j;k++){
            if(arr[k]>arr[k+1]){
                int sum = arr[k+1];
                arr[k+1]  = arr[k];
                arr[k] = sum;
            }
        }
    }
    printf(" Enter The Sorted Array  : ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }


    
}