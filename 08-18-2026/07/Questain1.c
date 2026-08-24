//Write a recursive function to compute the factorial of a non-negative integer n, where n! = n × (n−1) × (n−2) × … × 1 and 0! = 1.
//Input: A single non-negative integer n (0 ≤ n ≤ 20).
//Output: The value of n!
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, factorial(n));
    return 0;
}
