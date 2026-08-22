// Recursive function that returns the sum of first n natural numbers

#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
        return n + sum(n - 1);
}

int main()
{
    int n;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("The sum of first %d numbers is: %d.", n, sum(n));

    return 0;
}