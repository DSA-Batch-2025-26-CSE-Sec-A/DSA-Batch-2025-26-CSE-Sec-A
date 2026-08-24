#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (1 to %d) to delete: ", n);
    scanf("%d", &pos);

    if(pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--; // Reduce array size

        printf("Array after deletion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}