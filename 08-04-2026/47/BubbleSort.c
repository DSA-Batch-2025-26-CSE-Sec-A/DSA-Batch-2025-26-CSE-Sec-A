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

    printf("Inputted Array:- ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    //Bubble Sort
    for(int i=0;i<n;i++)
    {
        if(arr[i] > arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    printf("\nOutput:- ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
