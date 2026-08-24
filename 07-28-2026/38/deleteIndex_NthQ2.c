#include<stdio.h>
int main(){
    int arr[20],size,n,i;
    printf("Enter how many elements the array will have:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("Which index number you want to remove:");
    scanf("%d",&n);
    for(i=n;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    printf("The new array after deleting at index %d: ",n);
    for(i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
