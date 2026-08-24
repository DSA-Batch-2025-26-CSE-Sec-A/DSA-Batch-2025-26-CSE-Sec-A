#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    scanf("%d", &n);

    if (n < 0 || n > 30) {
        printf("Invalid input\n");
        return 1;
    }

    printf("%d\n", fibonacci(n));
    return 0;
}
