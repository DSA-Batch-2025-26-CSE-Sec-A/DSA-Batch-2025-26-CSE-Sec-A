#include <stdio.h>

int digitSum(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + digitSum(n / 10);
}

int digitalRoot(int n)
{
    int sum;

    if (n < 10)
        return n;

    sum = digitSum(n);

    return digitalRoot(sum);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Digit Sum = %d\n", digitSum(n));
    printf("Digital Root = %d\n", digitalRoot(n));

    return 0;
}