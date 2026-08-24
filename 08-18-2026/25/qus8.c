#include <stdio.h>
#include <string.h>

static int countPermutations = 0;

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void generatePermutations(char str[], int left, int right) {
    if (left == right) {
        printf("%s\n", str);
        countPermutations++;
        return;
    }

    for (int i = left; i <= right; i++) {
        int isDuplicate = 0;

        for (int j = left; j < i; j++) {
            if (str[j] == str[i]) {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate) {
            continue;
        }

        swap(&str[left], &str[i]);
        generatePermutations(str, left + 1, right);
        swap(&str[left], &str[i]);
    }
}

int main() {
    char str[9];
    scanf("%8s", str);

    generatePermutations(str, 0, (int)strlen(str) - 1);
    printf("Count: %d\n", countPermutations);
    return 0;
}
