#include <stdio.h>

int main() {
    int arr[100], size;

    printf("Enter number of elements in array: ");
    if (scanf("%d", &size) != 1 || size <= 0 || size > 100) {
        return 1;
    }

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (int start = 0, end = size - 1; start < end; start++, end--) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
