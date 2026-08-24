#include <stdio.h>
#include <string.h>

int count = 0;

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int used(char str[], int start, int current)
{
    int i;

    for (i = start; i < current; i++)
    {
        if (str[i] == str[current])
            return 1;
    }

    return 0;
}

void permute(char str[], int start, int n)
{
    int i;

    if (start == n)
    {
        printf("%s\n", str);
        count++;
        return;
    }

    for (i = start; i < n; i++)
    {
        /* Avoid duplicate permutations */
        if (used(str, start, i))
            continue;

        swap(&str[start], &str[i]);

        permute(str, start + 1, n);

        /* Backtrack */
        swap(&str[start], &str[i]);
    }
}

int main()
{
    char str[9];

    scanf("%8s", str);

    permute(str, 0, strlen(str));

    printf("Total = %d\n", count);

    return 0;
}