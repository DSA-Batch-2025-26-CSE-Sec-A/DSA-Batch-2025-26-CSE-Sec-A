#include <stdio.h>

void delete_at_index(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size, n;

    printf("Enter number of elements in array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        return 1;
    }

    int original[size], temp[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &original[i]);
    }

    printf("\nEnter 1-based position (n) to delete: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    printf("\nOriginal array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", original[i]);
    }
    printf("\n");

    for (int i = 0; i < size; i++) temp[i] = original[i];
    printf("Original array after deleting 1st element: ");
    delete_at_index(temp, size, 0);

    for (int i = 0; i < size; i++) temp[i] = original[i];
    printf("Original array after deleting position %d: ", n);
    delete_at_index(temp, size, n - 1);

    return 0;
}
