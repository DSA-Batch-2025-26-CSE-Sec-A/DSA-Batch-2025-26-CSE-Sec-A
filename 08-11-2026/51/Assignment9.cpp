#include <stdio.h>

int main()
{
    int arr[100], temp[100];
    int n, i, size, left, mid, right;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(size = 1; size < n; size = size * 2)
    {
        for(left = 0; left < n - 1; left += 2 * size)
        {
            mid = left + size - 1;
            right = left + 2 * size - 1;

            if(mid >= n)
                continue;
            if(right >= n)
                right = n - 1;

            int i = left, j = mid + 1, k = left;

            while(i <= mid && j <= right)
            {
                if(arr[i] <= arr[j])
                    temp[k++] = arr[i++];
                else
                    temp[k++] = arr[j++];
            }

            while(i <= mid)
                temp[k++] = arr[i++];

            while(j <= right)
                temp[k++] = arr[j++];

            for(i = left; i <= right; i++)
                arr[i] = temp[i];
        }
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
