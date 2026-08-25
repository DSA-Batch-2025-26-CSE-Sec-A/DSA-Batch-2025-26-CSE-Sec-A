#include <stdio.h>

unsigned long long factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int sumNatural(int n) {
    return (n == 0) ? 0 : n + sumNatural(n - 1);
}

int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int digitSum(int n) {
    return (n == 0) ? 0 : (n % 10) + digitSum(n / 10);
}

int digitalRoot(int n) {
    if (n < 10) return n;
    return digitalRoot(digitSum(n));
}