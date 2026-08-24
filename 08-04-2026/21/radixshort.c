#include <stdio.h>

int main() {
    int a[10], b[10], c[10], i, exp, max = 0;

    for(i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if(a[i] > max) max = a[i];
    }

    for(exp = 1; max / exp > 0; exp *= 10) {
        for(i = 0; i < 10; i++)
            c[i] = 0;

        for(i = 0; i < 10; i++)
            c[(a[i] / exp) % 10]++;

        for(i = 1; i < 10; i++)
            c[i] += c[i - 1];

        for(i = 9; i >= 0; i--)
            b[--c[(a[i] / exp) % 10]] = a[i];

        for(i = 0; i < 10; i++)
            a[i] = b[i];
    }

    for(i = 0; i < 10; i++)
        printf("%d ", a[i]);

    return 0;
}