//Write a recursive function that accepts a non-negative integer and returns the sum of its digits. Extend the same idea to write a second recursive function that returns the digital root of the number (the single digit obtained by repeatedly summing the digits).
//Input: A non-negative integer n (0 ≤ n ≤ 10⁹).
//Output: Two integers – the digit sum and the digital root of n.
#include<stdio.h>

int digitSum(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + digitSum(n / 10);
}

int digitalRoot(int n) {
    if (n < 10) {
        return n;
    }
    return digitalRoot(digitSum(n));
}

int main() {
    int n;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    printf("Digit sum: %d\n", digitSum(n));
    printf("Digital root: %d\n", digitalRoot(n));
    return 0;
}
