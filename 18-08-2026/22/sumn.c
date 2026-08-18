#include <stdio.h>

long sumNatural(int n) {
    if (n <= 0)
        return 0;
    return n + sumNatural(n - 1);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("Output: %ld\n", sumNatural(n));
    }
    return 0;
}