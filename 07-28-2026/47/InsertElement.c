//wap to insert an element in nth position of an array 
#include<stdio.h>
int main()
{
    int n,i,key,pos;

    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array one by one : \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter the position to be inserted : ");
    scanf("%d",&pos);

    printf("Enter the element to be added : ");
    scanf("%d",&key);

    for(i=n;i>=pos-1;i--)
        arr[i+1]=arr[i];
    
    arr[pos-1]=key;
    n++;

    printf("The revised array after inserting the element : ");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    
    return 0;
}