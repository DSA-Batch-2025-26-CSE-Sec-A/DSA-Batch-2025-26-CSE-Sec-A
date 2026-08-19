#include <stdio.h>


long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;
    long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    result = factorial(n);

    printf("%lld\n", result);

    return 0;
}