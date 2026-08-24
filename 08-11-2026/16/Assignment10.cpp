#include <stdio.h>

int main() {
    int arr[100], n, i;
    int stack[100], top = -1;
    int low, high, pivot, temp, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    stack[++top] = 0;
    stack[++top] = n - 1;

    while(top >= 0) {
        high = stack[top--];
        low = stack[top--];

        pivot = arr[high];
        i = low - 1;

        for(j = low; j < high; j++) {
            if(arr[j] <= pivot) {
                i++;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;

        int p = i + 1;

        if(p - 1 > low) {
            stack[++top] = low;
            stack[++top] = p - 1;
        }

        if(p + 1 < high) {
            stack[++top] = p + 1;
            stack[++top] = high;
        }
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
