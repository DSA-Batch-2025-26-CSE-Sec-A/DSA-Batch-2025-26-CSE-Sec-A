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
    for (int i = start; i < current; i++)
    {
        if (str[i] == str[current])
            return 1;
    }
    return 0;
}

void permute(char str[], int start, int length)
{
    if (start == length)
    {
        printf("%s\n", str);
        count++;
        return;
    }

    for (int i = start; i < length; i++)
    {
        if (used(str, start, i))
            continue;

        swap(&str[start], &str[i]);

        permute(str, start + 1, length);

        swap(&str[start], &str[i]);
    }
}

int main()
{
    char str[9];

    scanf("%8s", str);

    permute(str, 0, strlen(str));

    printf("Total = %d", count);

    return 0;
}
