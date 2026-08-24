#include<stdio.h>
#include<stdbool.h>
void bubblesort(int arr[],int n){
    int temp;
    bool swapped;
    for (int i= 0;i < n-1;i++){
        swapped = false;
        for (int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j +1];
                arr[j +1]= temp;
                swapped = true;
            }
        }
        if (swapped == false){
            break;
        }
     }
    }
    void printArray(int arr[],int size){
        for (int i= 0; i< size;i++){
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    int main(){
        int arr[] = {75,56,45,1,8,39,10};
        int n = sizeof(arr)/ sizeof(arr[0]);
        printf("Original Array : \n");
        printArray(arr ,n );
         bubblesort(arr,n);
         printf("Sorted Array in ascending order:\n");
         printArray(arr,n);
         return 0;
    }

