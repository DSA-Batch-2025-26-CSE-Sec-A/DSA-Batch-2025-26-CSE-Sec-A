#include <stdio.h>

// Recursive function to calculate sum of first N natural numbers
int sumNaturalNumbers(int n) {
    // Base case: sum of first 1 natural number is 1
    if (n == 1)
        return 1;
    
    // Recursive case: n + sum of first (n-1) natural numbers
    return n + sumNaturalNumbers(n - 1);
}

int main() {
    int n;
    
    printf("Input: ");
    scanf("%d", &n);
    
    int result = sumNaturalNumbers(n);
    printf("Output: %d\n", result);
    
    return 0;
}
