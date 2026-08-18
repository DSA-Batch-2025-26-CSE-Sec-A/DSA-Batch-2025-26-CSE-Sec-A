//Write a recursive function that returns the sum of the first N natural numbers, i.e. 1 + 2 + 3 + … + N, without using any loop and without using the closed-form formula N(N+1)/2.
//Input: A positive integer N (1 ≤ N ≤ 1000).
//Output: The required sum.
#include <stdio.h>

int sum_of_natural_numbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sum_of_natural_numbers(n - 1);
    }
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("Output: %d\n", sum_of_natural_numbers(n));
    }
    return 0;
}