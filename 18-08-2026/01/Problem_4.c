#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    else return n % 10 + sum(n / 10);
}
int root(int n)
{
    if (n < 10)
        return n;
    else return root(sum(n));
}
int main()
{
    int n;
    printf("Enter Number :",n);
    scanf("%d", &n);
    printf("Sum of its Digits is = %d\n", sum(n));
    printf("Digital Root is =%d", root(n));
    return 0;
}
