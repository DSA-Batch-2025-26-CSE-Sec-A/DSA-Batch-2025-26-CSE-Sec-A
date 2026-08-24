#include <stdio.h>

int main() {
    int arr[] = {72, 95, 102, 105, 110};
    int low = 0, high = 4, mid;
    int key;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("%d found at index %d", key, mid);
            return 0;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    printf("%d not found in the array.", key);

    return 0;
}
