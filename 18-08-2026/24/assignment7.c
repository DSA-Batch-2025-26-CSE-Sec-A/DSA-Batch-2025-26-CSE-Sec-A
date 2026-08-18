#include <stdio.h>

int moves = 0;

void hanoi(int n, char from, char aux, char to) {
    if (n == 1) {
        printf("Move disc 1 from %c to %c\n", from, to);
        moves++;
        return;
    }

    hanoi(n - 1, from, to, aux);

    printf("Move disc %d from %c to %c\n", n, from, to);
    moves++;

    hanoi(n - 1, aux, from, to);
}

int main() {
    int n;
    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');

    printf("Total moves = %d\n", moves);

    return 0;
}