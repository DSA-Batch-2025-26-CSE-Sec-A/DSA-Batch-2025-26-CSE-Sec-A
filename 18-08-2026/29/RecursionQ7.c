#include <stdio.h>

long long count = 0;

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disc 1 from %c to %c\n",
               source, destination);

        count++;
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);

    printf("Move disc %d from %c to %c\n",
           n, source, destination);

    count++;

    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;

    printf("Enter number of discs: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');

    printf("Total moves = %lld", count);

    return 0;
}
