#include <stdio.h>

int main() {
    int n, key;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter sorted array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int mid;
    int flag = 0;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            flag = 1;
            break;
        }
        else if (key > arr[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (flag == 1)
        printf("Element Found at index %d", mid);
    else
        printf("Element Not Found");

    return 0;
}