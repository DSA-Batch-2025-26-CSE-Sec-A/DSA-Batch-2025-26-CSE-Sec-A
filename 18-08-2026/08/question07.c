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

/*
Recurrence for the number of moves:

Let T(n) be the number of moves needed to transfer n discs from A to C.

To move n discs:
1. Move n-1 discs from A to B using C as auxiliary: T(n-1)
2. Move the largest disc from A to C: 1 move
3. Move n-1 discs from B to C using A as auxiliary: T(n-1)

So,
T(n) = 2T(n-1) + 1
with T(1) = 1.

Claim: T(n) = 2^n - 1

Proof by induction:

Base case: n = 1
T(1) = 1 = 2^1 - 1
So the formula holds for n = 1.

Inductive step:
Assume T(k) = 2^k - 1 for some k >= 1.
Then,
T(k+1) = 2T(k) + 1
       = 2(2^k - 1) + 1
       = 2^(k+1) - 2 + 1
       = 2^(k+1) - 1

Thus, if the formula holds for k, it also holds for k+1.
By mathematical induction, T(n) = 2^n - 1 for all n >= 1.

Therefore, the recursive algorithm performs exactly 2^n - 1 moves.
*/
