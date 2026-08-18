#include <stdio.h>

int binarySearchRecursive(int arr[], int left, int right, int key) {
    if (left > right) {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == key) {
        return mid;
    }

    if (arr[mid] > key) {
        return binarySearchRecursive(arr, left, mid - 1, key);
    }

    return binarySearchRecursive(arr, mid + 1, right, key);
}

int main() {
    int N, key;
    scanf("%d", &N);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    printf("%d\n", binarySearchRecursive(arr, 0, N - 1, key));
    return 0;
}
