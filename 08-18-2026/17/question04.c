#include <stdio.h>

// Recursive function to calculate the sum of digits
int sumOfDigits(int n) {
    // Base case: if n is 0, return 0
    if (n == 0)
        return 0;
    
    // Recursive case: last digit + sum of remaining digits
    return (n % 10) + sumOfDigits(n / 10);
}

// Recursive function to calculate the digital root
int digitalRoot(int n) {
    // Base case: if n is a single digit (0-9), return n
    if (n < 10)
        return n;
    
    // Recursive case: calculate digital root of the sum of digits
    return digitalRoot(sumOfDigits(n));
}

int main() {
    int n;
    
    printf("Input: ");
    scanf("%d", &n);
    
    int digitSum = sumOfDigits(n);
    int root = digitalRoot(n);
    
    printf("Output: %d %d\n", digitSum, root);
    
    return 0;
}

/*
EXPLANATION OF TERMINATION:

Why does the digitalRoot function terminate even though it calls itself
on a value produced by recursion?

The digitalRoot function terminates because of the following reasons:

1. STRICTLY DECREASING SEQUENCE:
   Each call to digitalRoot(n) computes sumOfDigits(n), which produces
   a strictly smaller number (except when n is already a single digit).
   
   Example: For n = 98765:
   - sumOfDigits(98765) = 35 < 98765
   - sumOfDigits(35) = 8 < 35
   - 8 is a single digit, so it stops

2. BOUNDED BELOW BY ZERO:
   Since all inputs are non-negative integers, and sumOfDigits always
   produces a non-negative result, we have a decreasing sequence that
   is bounded below by 0.

3. BASE CASE IS ALWAYS REACHED:
   For any positive integer n with multiple digits, the sum of its
   digits is strictly less than n (at minimum, a 2-digit number 10
   has digit sum 1). This monotonic decrease guarantees we eventually
   reach a single-digit number (0-9).

4. MATHEMATICAL PROPERTY:
   The digital root must eventually stabilize at a single digit because
   a single-digit number is the base case of the recursion and satisfies
   the condition (n < 10). Once we reach this state, no further recursion
   occurs.

Therefore, the recursion is guaranteed to terminate.
*/
