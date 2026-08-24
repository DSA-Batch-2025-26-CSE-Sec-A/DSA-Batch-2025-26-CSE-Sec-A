//The Fibonacci sequence is defined as F(0) = 0, F(1) = 1 and F(n) = F(n−1) + F(n−2) for n ≥ 2. Write a recursive function that returns the n-th Fibonacci number.
//Input: A non-negative integer n (0 ≤ n ≤ 30).
//Output: The value of F(n).
#include<stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printf("The %d-th Fibonacci number is %d\n", n, fibonacci(n));
    return 0;
}
