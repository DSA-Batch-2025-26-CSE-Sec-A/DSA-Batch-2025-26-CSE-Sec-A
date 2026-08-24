#include <stdio.h>

int main() {
    int a[100], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++) {
    temp = a[i];

    for(j = i - 1; j >= 0 && a[j] > temp; j--) {
    a[j + 1] = a[j];
    }

    a[j + 1] = temp;
    }

    printf("Sorted array: ");
    for(i = 0; i < n; i++) {
    printf("%d ", a[i]);
    }

    return 0;
}
