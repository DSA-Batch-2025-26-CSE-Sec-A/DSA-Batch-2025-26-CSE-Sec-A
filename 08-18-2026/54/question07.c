#include <stdio.h>

int moveCount = 0;

void towerOfHanoi(int n, char source, char aux, char dest) {
    if (n == 1) {
        printf("Move disc 1 from %c to %c\n", source, dest);
        moveCount++;
        return;
    }

    towerOfHanoi(n - 1, source, dest, aux);
    printf("Move disc %d from %c to %c\n", n, source, dest);
    moveCount++;
    towerOfHanoi(n - 1, aux, source, dest);
}

int main() {
    int n;
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'B', 'C');
    printf("\nTotal moves = %d\n", moveCount);

    return 0;
}

