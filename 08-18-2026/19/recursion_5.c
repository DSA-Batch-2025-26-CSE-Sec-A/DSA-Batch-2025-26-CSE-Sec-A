#include <stdio.h>
#include <string.h>

int palindrome(char str[], int left, int right)
{
    if (left < right &&
        !((str[left] >= 'A' && str[left] <= 'Z') ||
          (str[left] >= 'a' && str[left] <= 'z')))
        return palindrome(str, left + 1, right);
    if (left < right &&
        !((str[right] >= 'A' && str[right] <= 'Z') ||
          (str[right] >= 'a' && str[right] <= 'z')))
        return palindrome(str, left, right - 1);
    if (left >= right)
        return 1;
    char a = str[left];
    char b = str[right];
    if (a >= 'A' && a <= 'Z')
        a = a + 32;
    if (b >= 'A' && b <= 'Z')
        b = b + 32;
    if (a != b)
        return 0;

    // Recursive call
    return palindrome(str, left + 1, right - 1);
}

int main()
{
    char str[201];
    printf("Enter a string: ");
    fgets(str, 201, stdin);

    if (palindrome(str, 0, strlen(str) - 1))
        printf("YES");
    else
        printf("NO");
    return 0;
}