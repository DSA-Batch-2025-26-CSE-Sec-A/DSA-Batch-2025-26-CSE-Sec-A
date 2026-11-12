#include<stdio.h>
int main(){
    int arr[100],n,i;
    printf("Enter the number of element :");
    scanf("%d",&n);
    printf("Enter %d Element:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("array after deleting the first number:\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}