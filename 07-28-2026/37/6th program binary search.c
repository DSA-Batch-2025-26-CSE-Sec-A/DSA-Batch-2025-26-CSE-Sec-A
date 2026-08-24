#include<stdio.h>
int main()
{
    int arr[5]={72,95,102,105,110};
    int low=0,high=4,mid;
    int key=105;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            printf("Element found at index %d ",mid);
            return 0;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    printf("Element not found ");
    return 0;
}
