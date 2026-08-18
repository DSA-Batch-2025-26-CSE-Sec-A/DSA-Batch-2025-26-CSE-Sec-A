#include <stdio.h>
#include <string.h>

int count = 0;

void swap(char *a, char *b) {
    char t = *a;
    *a = *b;
    *b = t;
}

void permute(char s[], int l, int r) {
    int i;

    if (l == r) {
        printf("%s\n", s);
        count++;
        return;
    }

    for (i = l; i <= r; i++) {
        int j, duplicate = 0;

        for (j = l; j < i; j++)
            if (s[j] == s[i])
                duplicate = 1;

        if (duplicate)
            continue;

        swap(&s[l], &s[i]);
        permute(s, l + 1, r);

        // Backtracking: undo the swap
        swap(&s[l], &s[i]);
    }
}

int main() {
    char s[9];
    scanf("%8s", s);

    permute(s, 0, strlen(s) - 1);

    printf("Total = %d\n", count);

    return 0;
}