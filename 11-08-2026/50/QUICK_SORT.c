#include <stdio.h>
int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low+1;
    int j = high;
    int temp;
    while (i<=j)
    {
        while (i<=high&&A[i]<=pivot)
        {
            i++;
        }
        while (A[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void quickSort(int A[], int low, int high)
{
    int pos;

    if (low<high)
    {
        pos = partition(A,low,high);

        quickSort(A,low,pos-1);
        quickSort(A,pos+1,high);
    }
}
int main()
{
    int i,n;
    printf("Enter the number of elements you want: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter array elements: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nBefore sorting: ");
    for (i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    quickSort(A,0,n-1);
    printf("\nAfter sorting: ");
    for (i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    return 0;
}
