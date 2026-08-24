#include <stdio.h>


int sumNaturalNumbers(int n) {
   
    if (n == 1)
        return 1;
    
    
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
