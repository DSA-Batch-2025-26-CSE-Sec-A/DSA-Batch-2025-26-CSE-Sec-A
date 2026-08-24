#include <stdio.h>

long sumOfDigits(long n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

long digitalRoot(long n) {
    if (n < 10) return n;
    return digitalRoot(sumOfDigits(n));
}

int main() {
    long n;
    if (scanf("%ld", &n) == 1) {
        long sDigits = sumOfDigits(n);
        long dRoot = digitalRoot(n);
        printf("Output: %ld %ld\n", sDigits, dRoot);
    }
    return 0;
}