#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    if (left > right) return -1;
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == key) return mid;
    if (arr[mid] > key) return binarySearch(arr, left, mid - 1, key);
    return binarySearch(arr, mid + 1, right, key);
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    scanf("%d", &key);
    
    int result = binarySearch(arr, 0, n - 1, key);
    printf("Output: %d\n", result);
    return 0;
}