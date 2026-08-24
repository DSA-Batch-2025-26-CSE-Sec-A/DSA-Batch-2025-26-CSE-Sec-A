#include <stdio.h>

int main() {
    int arr[100], size, element, n;

    printf("Enter number of elements in array: ");
    if (scanf("%d", &size) != 1 || size <= 0 || size >= 100) {
        return 1;
    }

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    if (scanf("%d", &element) != 1) {
        return 1;
    }

    printf("Enter 1-based position (n) to insert at: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > size + 1) {
        printf("Invalid position.\n");
        return 1;
    }

    for (int i = size; i >= n; i--) {
        arr[i] = arr[i - 1];
    }
    arr[n - 1] = element;
    size++;

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
