//Given an array of N integers sorted in ascending order and a key value, write a recursive binary search function that returns the index of the key in the array, or −1 if the key is absent. Array indices start from 0.
#include<stdio.h>

int binarySearchHelper(int arr[], int key, int low, int high) {
    if (low > high) {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
        return mid;
    }

    if (arr[mid] > key) {
        return binarySearchHelper(arr, key, low, mid - 1);
    } else {
        return binarySearchHelper(arr, key, mid + 1, high);
    }
}

int binarySearch(int arr[], int key, int n) {
    return binarySearchHelper(arr, key, 0, n - 1);
}

int main() {
    int n, key;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array in ascending order: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    int index = binarySearch(arr, key, n);
    if (index == -1) {
        printf("Key not found.\n");
    } else {
        printf("Key found at index %d.\n", index);
    }
    return 0;
}
