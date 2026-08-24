#include<stdio.h>
int main(){
    int arr[50],n,i,j,key;
    printf("Enter number of element your array will have for insertion sort:");
    scanf("%d",&n); //[5,2,4,6,1]
    for(i=0;i<n;i++){
        printf("Enter element for index %d: ",i);
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++){
        key=arr[i];//key or temp from idx 1 ,assuming that just left to it the array is sorted
        j=i-1; //starts just left to the key

        while(j>=0 && arr[j]>key){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1]=key; //the temporary value stored in key is given to;
    }
    printf("The sorted array is:");
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}

