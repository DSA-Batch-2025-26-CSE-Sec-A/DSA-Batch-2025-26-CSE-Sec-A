#include<stdio.h>
int binarySearch(int arr[], int low, int high, int key)
{
    int mid;

    if (low > high)
        return -1;

    mid = (low + high) / 2;

    if (arr[mid] == key)
        return mid;

    if (key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);

    return binarySearch(arr, mid + 1, high, key);
}

int main()
{
    int n, key, i, result;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements:\n");

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter key: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    printf("Index = %d", result);

    return 0;
}
