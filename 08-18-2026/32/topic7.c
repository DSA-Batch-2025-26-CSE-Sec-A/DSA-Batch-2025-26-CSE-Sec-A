#include <stdio.h>

int count = 0;

void hanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 0)
        return;

    hanoi(n - 1, source, destination, auxiliary);

    printf("Move disc %d from %c to %c\n",
           n, source, destination);

    count++;

    hanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    printf("Total moves = %d", count);

    return 0;
}
