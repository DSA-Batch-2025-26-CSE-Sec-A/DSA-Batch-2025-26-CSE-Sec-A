#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    else  return n + sum(n - 1);
}
int main()
{
    int n;
    printf("Enter Number(N):",n);
    scanf("%d", &n);
    printf("Sum of First N Natural Numbers is = %d", sum(n));
    return 0;
}
