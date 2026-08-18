//Three pegs are labelled A (source), B (auxiliary) and C (destination). N discs of distinct sizes are stacked on peg A in decreasing order of size. Write a recursive program that prints every move required to transfer all N discs from A to C, subject to the rules that only one disc may be moved at a time and a larger disc may never be placed on a smaller one. The program must also print the total number of moves made.
#include<stdio.h>

int totalMoves = 0;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disc 1 from %c to %c\n", source, destination);
        totalMoves++;
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disc %d from %c to %c\n", n, source, destination);
    totalMoves++;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    printf("Enter the number of discs: ");
    scanf("%d", &n);
    printf("Sequence of moves:\n");
    towerOfHanoi(n, 'A', 'B', 'C');
    printf("Total number of moves: %d\n", totalMoves);
    return 0;
}
