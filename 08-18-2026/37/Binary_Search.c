#include<stdio.h>
int binarySearch(int arr[],int low,int high,int key)
{
    int mid;
    if(low>high)
        return -1;
    mid=(low+high)/2;
    if(arr[mid]==key)
        return mid;
    if(key<arr[mid])
        return binarySearch(arr,low,mid-1,key);
    return binarySearch(arr,mid+1,high,key);
}
int main()
{
    int arr[100];
    int a,key,i;
    printf("Enter number of elements ");
    scanf("%d",&a);
    printf("Enter array elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter key ");
    scanf("%d", &key);
    printf("%d", binarySearch(arr,0,a-1,key));
    return 0;
}
