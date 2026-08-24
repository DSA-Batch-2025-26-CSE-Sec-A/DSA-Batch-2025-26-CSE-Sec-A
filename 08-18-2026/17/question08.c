#include <stdio.h>
#include <string.h>

int total = 0;

void printPermutations(char str[], int left, int right) {
    if (left == right) {
        printf("%s\n", str);
        total++;
        return;
    }

    for (int i = left; i <= right; i++) {
        // Skip duplicates: if same character is used again at this level, ignore it
        if (i > left && str[i] == str[left])
            continue;

        char temp = str[i];
        str[i] = str[left];
        str[left] = temp;

        printPermutations(str, left + 1, right);

        // Backtracking: undo the swap to restore the previous state
        temp = str[i];
        str[i] = str[left];
        str[left] = temp;
    }
}

int main() {
    char str[9];
    scanf("%s", str);

    int len = strlen(str);
    printPermutations(str, 0, len - 1);
    printf("Total = %d\n", total);

    return 0;
}

/*
Purpose of the backtracking step:

The backtracking step is the swap undoing operation after each recursive call.
It restores the string to its previous configuration before exploring the next
branch of the recursion tree.

Why is it necessary?
- In each recursive level, we choose one character to fix at the current position.
- We swap it into place and recurse.
- After returning, the next character must be tried in the same position.
- If we do not undo the swap, the current level's state is corrupted, and the
  next branch starts from an already modified string.

If the backtracking step is omitted:
- The string keeps accumulating previous swaps.
- Some positions may be revisited with the wrong characters already moved.
- This produces duplicate or invalid permutations, and sometimes even missing
  permutations.

Example for "AAB":
Without backtracking, the recursive tree becomes corrupted, and outputs may repeat
or omit valid arrangements. Instead of the correct distinct permutations:
AAB, ABA, BAA
we may get duplicates like AAB, AAB, ABA, ... or even incorrect sequences that are
not valid permutations of the original string.
*/
