#include <stdio.h>

int main() {
    int arr[100], output[100];
    int n, i, max, exp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    for(exp = 1; max / exp > 0; exp *= 10) {
        int count[10] = {0};


        for(i = 0; i < n; i++) {
            count[(arr[i] / exp) % 10]++;
        }
        for(i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for(i = n - 1; i >= 0; i--) {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
}
        for(i = 0; i < n; i++) {
            arr[i] = output[i];
        }
    }

    printf("Sorted Array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
