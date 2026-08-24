//bubblesort.c 
#include <stdio.h>

int main(void) {
    int array[] = {10, 28, 36, 56, 24, 41, 60, 57, 52};
    int n = sizeof(array) / sizeof(array[0]);

      for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }~
    printf("\n");

    return 0;
}
