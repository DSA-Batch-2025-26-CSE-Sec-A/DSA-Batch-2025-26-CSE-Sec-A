#include <stdio.h>

int search(int arr[], int b, int lo, int hi) {

    if (lo > hi)
        return -1;

    int mid = lo + (hi - lo) / 2;

    if (arr[mid] == b)
        return mid;

    else if (arr[mid] < b)
        return search(arr, b, mid + 1, hi);

    else
        return search(arr, b, lo, mid - 1);
}

int main() {
    int n, k;

    printf("Enter The Size Of The Array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter The Finding Element: ");
    scanf("%d", &k);

    printf("%d", search(arr, k, 0, n - 1));

    return 0;
}
