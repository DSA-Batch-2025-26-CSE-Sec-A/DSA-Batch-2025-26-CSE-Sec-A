#include <stdio.h>

int digitSum(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + digitSum(n / 10);
}

int digitalRoot(int n)
{
    if (n < 10)
        return n;
    return digitalRoot(digitSum(n));
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d %d", digitSum(n), digitalRoot(n));

    return 0;
}
