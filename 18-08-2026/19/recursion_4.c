#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + sum(n / 10);
}
int root(int n)
{
    if (n < 10)
        return n;
    else
        return root(sumDigits(n));
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d %d", sum(n), root(n));
    return 0;
}