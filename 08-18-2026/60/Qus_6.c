#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;  // Base case: key not found
    }
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) {
        return mid;  // Key found
    } else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key);  // Search left half
    } else {
        return binarySearch(arr, mid + 1, high, key);  // Search right half
    }
}
int main() {
    int n,i;
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int key;
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n - 1, key);
    printf("%d\n", result);
    return 0;
}
