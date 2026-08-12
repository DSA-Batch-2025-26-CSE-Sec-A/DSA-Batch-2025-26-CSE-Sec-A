#include <stdio.h>

int main(){
    int array[] = {176, 21, 39, 136, 451, 76, 25, 32, 65, 79, 81, 105, 902, 5, 6, 1, 2};
    int n = sizeof(array) / sizeof(array[0]);
    int output[100];
    int max = array[0];
    int exp = 1;

    for (int i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    while (max / exp > 0) {
        int count[10] = {0};

        for (int i = 0; i < n; i++) {
            count[(array[i] / exp) % 10]++;
        }

        for (int i = 1; i < 10; i++) {
            count[i] += count[i - 1];
        }

        for (int i = n - 1; i >= 0; i--) {
            int digit = (array[i] / exp) % 10;
            count[digit]--;
            output[count[digit]] = array[i];
        }

        for (int i = 0; i < n; i++) {
            array[i] = output[i];
        }

        exp *= 10;
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}