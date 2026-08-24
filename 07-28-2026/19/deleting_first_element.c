//wap to delete the first element of an array 
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number of elements in the array : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array one by one : \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n-1;i++)
        arr[i]=arr[i+1];
    n--;
    printf("The revised array after deleting the first element : \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}