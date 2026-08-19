#include <stdio.h>
int digitSum(int n)
{
    if (n == 0)
        return 0;
    else
        return (n % 10) + digitSum(n / 10);
}
int digitalRoot(int n)
{
    if (n < 10)
        return n;
    else
        return digitalRoot(digitSum(n));
}

int main()
{
    int n;
    int sum, root;

    printf("Input: ");
    scanf("%d", &n);

    sum = digitSum(n);
    root = digitalRoot(n);

    printf("Output: %d %d\n", sum, root);

    return 0;
}