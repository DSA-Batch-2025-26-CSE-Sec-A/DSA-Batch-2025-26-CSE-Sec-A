#include <stdio.h>

// Recursive binary search
int binarySearch(int arr[], int left, int right, int key) {
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == key)
        return mid;

    if (arr[mid] > key)
        return binarySearch(arr, left, mid - 1, key);

    return binarySearch(arr, mid + 1, right, key);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int key;
    scanf("%d", &key);

    int index = binarySearch(arr, 0, n - 1, key);
    printf("%d\n", index);

    return 0;
}

/*
Recurrence relation for time complexity:

T(n) = T(n/2) + O(1)

This is because in each recursive call, the search space is reduced to half,
while the work done at each level is constant time.

Solving the recurrence:

T(n) = T(n/2) + c
     = T(n/4) + c + c
     = ...
     = T(1) + c log2 n

Hence,
T(n) = O(log n)

Depth of recursion stack:

At each recursive step, the problem size is halved, so the maximum depth is:

O(log n)

This is the number of levels until the search range becomes empty or the key is found.
*/
