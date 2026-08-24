//Write a recursive function that checks whether a given string is a palindrome. The comparison must be case-insensitive and must ignore every character that is not an alphabet. No auxiliary array or reversed copy of the string may be created – the function must work on the original string using index parameters only.
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isPalindromeHelper(char *str, int start, int end) {
    // Base case: if start >= end, we've checked all characters
    if (start >= end) {
        return 1;
    }

    // Skip non-alphabet characters from the left
    while (start < end && !isalpha(str[start])) {
        start++;
    }

    // Skip non-alphabet characters from the right
    while (start < end && !isalpha(str[end])) {
        end--;
    }

    // Compare characters (case-insensitive)
    if (tolower(str[start]) != tolower(str[end])) {
        return 0;
    }

    // Recursively check the rest of the string
    return isPalindromeHelper(str, start + 1, end - 1);
}

int isPalindrome(char *str) {
    int len = strlen(str);
    return isPalindromeHelper(str, 0, len - 1);
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
