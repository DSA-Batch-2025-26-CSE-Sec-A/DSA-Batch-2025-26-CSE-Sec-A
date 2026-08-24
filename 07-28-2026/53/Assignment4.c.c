#include <stdio.h>

int main() {
    int arr[100], size, target, found = -1;

    printf("Enter number of elements in array: ");
    if (scanf("%d", &size) != 1 || size <= 0 || size > 100) {
        return 1;
    }

    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search for: ");
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Element %d found at index %d (position %d).\n", target, found, found + 1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
