#include<stdio.h>
void merge(int arr[],int start,int mid,int end)
{
    int temp[100],i,j,k;
    i=start;
    j=mid+1;
    k=start;
    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    while(j<=end)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(i=start;i<=end;i++)
    {
        arr[i]=temp[i];
    }
}
void mergeSort(int arr[],int start,int end)
{
    int mid;
    if(start<end)
    {
        mid=(start + end)/2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}
int main()
{
    int arr[100],a,i;
    printf("Enter a ");
    scanf("%d", &a);
    printf("Enter elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr,0,a-1);
    printf("Sorted array is ");
    for(i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
