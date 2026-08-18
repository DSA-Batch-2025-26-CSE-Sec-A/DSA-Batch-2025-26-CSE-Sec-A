#include <stdio.h>
#include <string.h>
#include <ctype.h>

int P(const char *s, int left, int right) {
    if (left >= right) return 1;
    
    if (!A(s[left])) {
        return P(s, left + 1, right);
    }
    if (!A(s[right])) {
        return P(s, left, right - 1);
    }
    
    if (tolower(s[left]) != tolower(s[right])) {
        return 0;
    }
    
    return P(s, left + 1, right - 1);
}

int main() {
    char s[256];
    if (fgets(s, sizeof(s), stdin)) {
        s[strcspn(s, "\n")] = 0;
        int len = strlen(s);
        if (P(s, 0, len - 1)) {
            printf("Output: YES\n");
        } else {
            printf("Output: NO\n");
        }
    }
    return 0;
}