#include <stdio.h>

int binarySearch(int a[], int low, int high, int key) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;

    if (a[mid] == key)
        return mid;
    else if (key < a[mid])
        return binarySearch(a, low, mid - 1, key);
    else
        return binarySearch(a, mid + 1, high, key);
}

int main() {
    int n, key, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    printf("%d", binarySearch(a, 0, n - 1, key));

    return 0;
}