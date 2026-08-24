//wap to delete the nth element of an array 
#include<stdio.h>
int main()
{
    int n,i,key;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array one by one : \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the position to be deleted : ");
    scanf("%d",&key);
    if(key<1 || key>n)
        printf("Invalid position.");
    else
    {
        for(i=key-1;i<n-1;i++)
            arr[i]=arr[i+1];
        n--;
        printf("The revised array after deleting the nth element : ");
        for(i=0;i<n;i++)
            printf("%d ",arr[i]);
    }
    return 0;
}