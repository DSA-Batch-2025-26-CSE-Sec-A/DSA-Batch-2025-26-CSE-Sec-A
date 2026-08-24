#include<stdio.h>
int main(){
    int arr[20],size,i;
    printf("Enter how many elements the array will have:");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    printf("The reversed array is:");
    for(i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
