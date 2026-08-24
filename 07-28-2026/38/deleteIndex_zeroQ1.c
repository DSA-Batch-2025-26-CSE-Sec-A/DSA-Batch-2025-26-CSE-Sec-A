#include <stdio.h>
int main(){
    int arr[20],n,i;
    printf("Enter how many elements the array will have:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter %d element:",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    printf("The new array is:");
    for(i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
