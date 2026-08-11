#include<stdio.h>
void quick_sort(int arr[],int low,int high)
{
    int i,j,pivot,temp;
    if(low<high)
    {
        pivot=arr[high];
        i=low-1;
        for(j=low;j<high;j++)
        {
            if(arr[j]<pivot)
            {
                i++;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        temp=arr[i+1];
        arr[i+1]=arr[high];
        arr[high]=temp;
        quick_sort(arr,low,i);
        quick_sort(arr,i+2,high);
    }
}
int main()
{
    int arr[100],a,i;
    printf("Enter number of elements ");
    scanf("%d",&a);
    printf("Enter array elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    quick_sort(arr,0,a-1);
    printf("Sorted array is ");
    for(i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
