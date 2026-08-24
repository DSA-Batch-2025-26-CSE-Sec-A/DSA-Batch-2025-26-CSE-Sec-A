#include <stdio.h>
int main()
{
    int n;
    printf("Enter size:- ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter values:- ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Inputed Array:- ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    //Insertion Sort

    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("\nSorted array:- ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
