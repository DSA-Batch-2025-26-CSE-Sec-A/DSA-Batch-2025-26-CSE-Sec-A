#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isPalindromeRec(const char *s, int left, int right) {
    // Skip non-alphabet characters from the left
    while (left < right && !isalpha((unsigned char)s[left])) {
        left++;
    }
    // Skip non-alphabet characters from the right
    while (left < right && !isalpha((unsigned char)s[right])) {
        right--;
    }
    // Base case: pointers have met or crossed
    if (left >= right) {
        return 1;
    }
    // Compare characters case-insensitively
    if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) {
        return 0;
    }
    // Recurse inward
    return isPalindromeRec(s, left + 1, right - 1);
}
int main(void) {
    char str[205];
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }
    // Remove trailing newline, if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    if (isPalindromeRec(str, 0, (int)len - 1)) {
        printf("YES\n");
    } else 
        printf("NO\n");
    return 0;
}
