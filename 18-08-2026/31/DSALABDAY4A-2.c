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
    int N;

    scanf("%d", &N);

    printf("%d\n", sum(N));

    return 0;
}