#include <stdio.h>

int deleteAt(int arr[], int size, int pos) {
    if (pos < 0 || pos >= size) {
        printf("Error: Index out of bounds.\n");
        return size; 
    }

    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    return size - 1; 
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100] = {5, 10, 15, 20, 25, 30};
    int size = 6;

    printf("Original array: ");
    printArray(arr, size);
    int n = 3; 
    size = deleteAt(arr, size, n);

    printf("Array after deleting index %d: ", n);
    printArray(arr, size);

    return 0;
}
