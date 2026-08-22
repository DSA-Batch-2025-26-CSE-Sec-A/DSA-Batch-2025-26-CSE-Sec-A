#include<stdio.h>
int binarySearch(int arr[],int low,int high,int key)
{
    if (low > high)
        return -1;
    int mid=(low+high)/2;
    if (arr[mid]==key)
        return mid;
    if (key<arr[mid])
        return binarySearch(arr,low,mid-1,key);
    return binarySearch(arr,mid+1,high,key);
}
int main()
{
    int n,key,i;
    printf("Enter the number of element you want: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers: ");
    for (i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Enter the key: ");
    scanf("%d",&key);
    printf("%d",binarySearch(arr,0,n-1,key));
    return 0;
}
