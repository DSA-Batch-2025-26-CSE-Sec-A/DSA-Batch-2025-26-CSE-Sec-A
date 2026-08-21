#include <stdio.h>
int moves = 0;
void hanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        printf("Move disc 1 from %c to %c\n", source, destination);
        moves++;
        return;
    }
    hanoi(n - 1, source, destination, auxiliary);
    printf("Move disc %d from %c to %c\n", n, source, destination);
    moves++;
    hanoi(n - 1, auxiliary, source, destination);
}
int main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    printf("Total moves = %d", moves);
    return 0;
}
