#include <stdio.h>

// Recursive function to calculate the n-th Fibonacci number
int fibonacci(int n) {
    // Base case: F(0) = 0
    if (n == 0)
        return 0;
    
    // Base case: F(1) = 1
    if (n == 1)
        return 1;
    
    // Recursive case: F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    
    printf("Input: ");
    scanf("%d", &n);
    
    int result = fibonacci(n);
    printf("Output: %d\n", result);
    
    return 0;
}
