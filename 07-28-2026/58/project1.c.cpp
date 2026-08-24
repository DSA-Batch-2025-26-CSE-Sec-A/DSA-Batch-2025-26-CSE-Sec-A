#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
        }n--;
    printf("after delete the first element:");
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
    return 0;
}
