#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int shouldSwap(char str[], int start, int curr) {
    for (int i = start; i < curr; i++) {
        if (str[i] == str[curr])
            return 0;
    }
    return 1;
}

void findPermutations(char str[], int index, int n, int *count) {
    if (index >= n) {
        printf("%s\n", str);
        (*count)++;
        return;
    }
    for (int i = index; i < n; i++) {
        if (shouldSwap(str, index, i)) {

            char temp = str[index];
            str[index] = str[i];
            str[i] = temp;
            
            findPermutations(str, index + 1, n, count);
            
            temp = str[index];
            str[index] = str[i];
            str[i] = temp;
        }
    }
}

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char str[20];
    if (scanf("%s", str) == 1) {
        int n = strlen(str);
        qsort(str, n, sizeof(char), compare);
        int count = 0;
        findPermutations(str, 0, n, &count);
        printf("Total = %d\n", count);
    }
    return 0;
}