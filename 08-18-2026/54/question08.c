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
      t
        if (i > left && str[i] == str[left])
            continue;

        char temp = str[i];
        str[i] = str[left];
        str[left] = temp;

        printPermutations(str, left + 1, right);

     
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

