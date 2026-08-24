//linear search
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
    
    printf("Enter the element to be searched : ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
            printf("Element found");
        else 
            continue;
    }
    return 0;
}