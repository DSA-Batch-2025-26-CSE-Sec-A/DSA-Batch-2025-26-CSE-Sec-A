#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[], int left, int right)
{
    while (left < right && !isalpha(str[left]))
        left++;

    while (left < right && !isalpha(str[right]))
        right--;

    if (left >= right)
        return 1;

    if (tolower(str[left]) != tolower(str[right]))
        return 0;

    return isPalindrome(str, left + 1, right - 1);
}

int main()
{
    char str[201];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (isPalindrome(str, 0, strlen(str) - 1))
        printf("YES");
    else
        printf("NO");

    return 0;
}
