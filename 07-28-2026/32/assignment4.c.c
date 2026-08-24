#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos, value;

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter the position (1 to %d) to insert: ", size + 1);
    scanf("%d", &pos);

    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (pos < 1 || pos > size + 1) {
        printf("Invalid position! Position must be between 1 and %d.\n", size + 1);
    } else {
    
        for (int i = size; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        arr[pos - 1] = value;
        size++;
        printf("Array after insertion: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
