#include <stdio.h>
int sumDigits(long long n)
{
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}
int digitalRoot(long long n)
{
    if (n < 10)
        return n;

    return digitalRoot(sumDigits(n));
}
int main()
{
    long long n;
    int digitSum, root;

    scanf("%lld", &n);

    digitSum = sumDigits(n);
    root = digitalRoot(n);
    printf("%d %d\n", digitSum, root);
    return 0;
}