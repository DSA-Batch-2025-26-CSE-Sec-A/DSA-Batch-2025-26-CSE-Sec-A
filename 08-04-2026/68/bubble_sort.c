#include <stdio.h>
int main()
{
    int n;
    printf("Enter Size of element :");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the value of the elements : \n");

    for (
int i = 0; i < n; i++
    ) 
    {
        scanf("%d", &arr[i]);
    
    }
    for (int i = 0; i < n; i++)
    {
       if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    printf("The sorted array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}