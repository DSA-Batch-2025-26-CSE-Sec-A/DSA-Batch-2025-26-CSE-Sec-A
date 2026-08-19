#include <stdio.h>
int sum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main()
{
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = sum(n);

    printf("Sum = %d\n", result);

    return 0;
}