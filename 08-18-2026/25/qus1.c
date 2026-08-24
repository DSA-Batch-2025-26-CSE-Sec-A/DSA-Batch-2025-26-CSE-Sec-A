#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;

    scanf("%d", &n);

    if (n < 0 || n > 20) {
        printf("Invalid input. Please enter a non-negative integer between 0 and 20.\n");
        return 1;
    }

    printf("%lld\n", factorial(n));
    return 0;
}
