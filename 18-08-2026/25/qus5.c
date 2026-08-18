#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isAlpha(char ch) {
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int isPalindromeRecursive(char s[], int left, int right) {
    while (left <= right && !isAlpha(s[left])) {
        left++;
    }
    while (left <= right && !isAlpha(s[right])) {
        right--;
    }

    if (left > right) {
        return 1;
    }

    if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
        return 0;
    }

    return isPalindromeRecursive(s, left + 1, right - 1);
}

int main() {
    char s[201];
    fgets(s, sizeof(s), stdin);

    size_t len = strlen(s);
    while (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[--len] = '\0';
    }

    if (isPalindromeRecursive(s, 0, (int)len - 1)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
