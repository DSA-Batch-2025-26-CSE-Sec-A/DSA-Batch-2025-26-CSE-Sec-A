#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination, long long *moves) {
    if (n == 1) {
        printf("Move disc 1 from %c to %c\n", source, destination);
        (*moves)++;
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary, moves);
    printf("Move disc %d from %c to %c\n", n, source, destination);
    (*moves)++;
    towerOfHanoi(n - 1, auxiliary, source, destination, moves);
}

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        long long moves = 0;
        towerOfHanoi(n, 'A', 'B', 'C', &moves);
        printf("Total moves = %lld\n", moves);
    }
    return 0;
}