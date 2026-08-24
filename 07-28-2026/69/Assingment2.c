#include <stdio.h>

int main() {
    int arr[100], n, i, pos, element;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input position and element to insert
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Check for valid position
    if(pos < 1 || pos > n + 1) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for(i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert the element
        arr[pos - 1] = element;
        n++;

        // Display updated array
        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}