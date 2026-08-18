//Write a recursive program that generates and prints all distinct permutations of the characters of a given string. If the string contains repeated characters, each distinct arrangement must be printed exactly once.
#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
        return;
    }

    for (int i = left; i <= right; i++) {
        swap((str + left), (str + i));
        permute(str, left + 1, right);
        swap((str + left), (str + i)); // backtrack
    }
}

int main() {
    char str[9]; // Assuming maximum length of 8 characters
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    permute(str, 0, len - 1);
    return 0;
}
