#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    // Input size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Delete first element
    for(i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("\nArray after deleting the first element:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Delete nth element
    printf("\n\nEnter the position of the element to delete (1 to %d): ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        printf("Array after deleting the %dth element:\n", pos);
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}