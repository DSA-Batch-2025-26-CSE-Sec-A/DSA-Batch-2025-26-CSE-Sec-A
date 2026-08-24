#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Recursive helper function to check if string is a palindrome
// left: starting index, right: ending index
int isPalindromeHelper(const char *str, int left, int right) {
    // Skip non-alphabetic characters from left side
    while (left < right && !isalpha(str[left]))
        left++;
    
    // Skip non-alphabetic characters from right side
    while (left < right && !isalpha(str[right]))
        right--;
    
    // Base case: pointers have met or crossed - it's a palindrome
    if (left >= right)
        return 1;
    
    // Compare characters case-insensitively
    if (tolower(str[left]) != tolower(str[right]))
        return 0;  // Not a palindrome
    
    // Recursively check the remaining string
    return isPalindromeHelper(str, left + 1, right - 1);
}

// Main function to check if string is a palindrome
int isPalindrome(const char *str) {
    int len = strlen(str);
    return isPalindromeHelper(str, 0, len - 1);
}

int main() {
    char str[201];
    
    // Read input line
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline if present
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';
    
    // Check and output result
    if (isPalindrome(str))
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}

/*
HOW THE RECURSION WORKS:

The isPalindromeHelper function uses two index parameters (left and right)
to check the string from both ends toward the center:

1. SKIP NON-ALPHABETIC CHARACTERS:
   Both from the left side and right side, we skip any characters that
   are not alphabets (spaces, punctuation, digits, etc.)

2. BASE CASE (left >= right):
   When the indices meet or cross, we've successfully matched all
   alphabetic characters, so it's a palindrome. Return 1 (TRUE).

3. CHARACTER COMPARISON:
   Compare the characters at left and right indices using tolower()
   for case-insensitive comparison. If they don't match, return 0 (FALSE).

4. RECURSIVE CASE:
   If characters match, recursively check the substring between
   left+1 and right-1.

EXAMPLE: "A man, a plan, a canal: Panama"

Step 1: Compare 'a' (left) with 'a' (right) ✓
Step 2: Compare 'm' (left) with 'm' (right) ✓
Step 3: Compare 'a' (left) with 'a' (right) ✓
... and so on until all alphabetic characters match.

KEY ADVANTAGES:
- No auxiliary arrays or reversed strings created
- Works on original string using only index parameters
- Case-insensitive comparison using tolower()
- Ignores non-alphabetic characters seamlessly
- Pure recursive approach
*/
