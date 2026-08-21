#include <stdio.h>
#include <string.h>
int count = 0;
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
int used(char str[], int start, int end, char ch)
{
    for (int i = start; i < end; i++)
    {
        if (str[i] == ch)
            return 1;
    }
    return 0;
}
void permutations(char str[], int index, int n)
{
    if (index == n)
    {
        printf("%s\n", str);
        count++;
        return;
    }
    for (int i = index; i < n; i++)
    {
        if (used(str, index, i, str[i]))
            continue;
        swap(&str[index], &str[i]);
        permutations(str, index + 1, n);
        swap(&str[index], &str[i]);
    }
}
int main()
{
    char str[9];
    scanf("%s", str);
    permutations(str, 0, strlen(str));
    printf("Total = %d", count);
    return 0;
}
