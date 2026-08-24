#include <stdio.h>
#include <stdlib.h>

static void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

static int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; ++j) {
        if (arr[j] <= pivot) {
            ++i;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main(void) {
    int n;
    if (printf("Enter number of elements: ") < 0) return 1;
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid number of elements\n");
        return 1;
    }

    int *arr = malloc((size_t)n * sizeof(int));
    if (!arr) {
        perror("malloc");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; ++i) {
        if (scanf("%d", &arr[i]) != 1) {
            fprintf(stderr, "Failed to read element %d\n", i);
            free(arr);
            return 1;
        }
    }

    quicksort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d", arr[i]);
        if (i + 1 < n) putchar(' ');
    }
    putchar('\n');

    free(arr);
    return 0;
}
