#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isPalindromeHelper(const char *str, int left, int right) {
   
    while (left < right && !isalpha(str[left]))
        left++;
    
  
    while (left < right && !isalpha(str[right]))
        right--;
    
    if (left >= right)
        return 1;
    
  
    if (tolower(str[left]) != tolower(str[right]))
        return 0;  // Not a palindrome
    
    return isPalindromeHelper(str, left + 1, right - 1);
}

int isPalindrome(const char *str) {
    int len = strlen(str);
    return isPalindromeHelper(str, 0, len - 1);
}

int main() {
    char str[201];
    
    fgets(str, sizeof(str), stdin);
    
    int len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';
    

    if (isPalindrome(str))
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}
