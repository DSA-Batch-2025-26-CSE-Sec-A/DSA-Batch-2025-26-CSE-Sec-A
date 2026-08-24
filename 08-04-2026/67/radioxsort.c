#include <stdio.h>

int main()
{
    int n, i, exp, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], output[n];
    int count[10];

    printf("Enter the elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    for(exp = 1; max / exp > 0; exp *= 10)
    {
        for(i = 0; i < 10; i++)
            count[i] = 0;

        for(i = 0; i < n; i++)
            count[(arr[i] / exp) % 10]++;

        for(i = 1; i < 10; i++)
            count[i] += count[i - 1];

        for(i = n - 1; i >= 0; i--)
        {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        for(i = 0; i < n; i++)
            arr[i] = output[i];
    }

    printf("Sorted array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}