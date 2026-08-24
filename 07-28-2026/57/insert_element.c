#include<stdio.h>
int main()
{
    int n,i,key,pos;

    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Enter the position to insert : ");
    scanf("%d",&pos);

    printf("Enter the element to add : ");
    scanf("%d",&key);

    for(i=n;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=key;
    n++;

    printf("The new array : ");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}