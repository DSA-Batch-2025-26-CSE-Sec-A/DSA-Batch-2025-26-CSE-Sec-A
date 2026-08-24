#include <stdio.h>

long long count = 0;

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disc 1 from %c to %c\n", source, destination);
        count++;
        return;
    }

    // Move n-1 discs from source to auxiliary
    towerOfHanoi(n - 1, source, destination, auxiliary);

    // Move the largest disc from source to destination
    printf("Move disc %d from %c to %c\n", n, source, destination);
    count++;

    // Move n-1 discs from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');

    printf("Total moves = %lld\n", count);

    return 0;
}