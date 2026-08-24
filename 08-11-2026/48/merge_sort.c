#include <stdio.h>

// Function to swap two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i <= j)
    {
        // Find element greater than pivot
        while (i <= high && arr[i] <= pivot)
            i++;

        // Find element smaller than pivot
        while (arr[j] > pivot)
            j--;

        if (i < j)
            swap(&arr[i], &arr[j]);
    }

    // Place pivot in its correct position
    swap(&arr[low], &arr[j]);

    return j;
}
