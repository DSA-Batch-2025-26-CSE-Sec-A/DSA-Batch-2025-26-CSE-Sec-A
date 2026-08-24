#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}
void permuteUnique(char *chars, int n, char *path, int pathLen, int *used, int *count) {
    if (pathLen == n) {
        path[pathLen] = '\0';
        printf("%s\n", path);
        (*count)++;
        return;
    }
    int i;
    for (i = 0; i < n; i++) {
        if (used[i]) continue;

        // Skip duplicate: if this char equals the previous char
        // and the previous one hasn't been used in the current branch,
        // we've already explored this choice at this depth.
        if (i > 0 && chars[i] == chars[i - 1] && !used[i - 1]) continue;
        used[i] = 1;
        path[pathLen] = chars[i];
        permuteUnique(chars, n, path, pathLen + 1, used, count);
        used[i] = 0;
    }
}
int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    int n = strlen(input);
    qsort(input, n, sizeof(char), compare); // sort to group duplicates
    int *used = (int *)calloc(n, sizeof(int));
    char *path = (char *)malloc((n + 1) * sizeof(char));
    int count = 0;
    permuteUnique(input, n, path, 0, used, &count);
    printf("Total distinct permutations: %d\n", count);
    free(used);
    free(path);
    return 0;
}
