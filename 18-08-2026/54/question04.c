#include <stdio.h>

int sumOfDigits(int n) {
 
    if (n == 0)
        return 0;
  
    return (n % 10) + sumOfDigits(n / 10);
}

int digitalRoot(int n) {
 
    if (n < 10)
        return n;
    

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

