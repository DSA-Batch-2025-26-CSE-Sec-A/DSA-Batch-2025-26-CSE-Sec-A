#include <stdio.h>

int main() {
    int a[10], i, j, key;

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    for(i = 1; i < 10; i++) {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    return 0;
}
