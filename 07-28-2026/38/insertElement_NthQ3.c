#include<stdio.h>
int main(){
    int arr[20],size,n,insert,i;
    printf("Enter how many elements the array will have:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("Which index element you want change:");
    scanf("%d",&n);
    printf("Now enter the element you want to insert at index %d:",n);
    scanf("%d",&insert);
    arr[n]=insert;
    printf("The new array is: ");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
