#include<stdio.h>
int main()
{
    int arr[100],a,i,j,temp;
    printf("Enter number of elements ");
    scanf("%d", &a);
    printf("Enter array elements ");
    for(i=0;i<a;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<a-1;i++)
    {
        for(j=0;j<a-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted array is ");
    for(i=0;i<a;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
