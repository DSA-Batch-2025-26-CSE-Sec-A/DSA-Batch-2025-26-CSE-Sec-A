#include <stdio.h>
#include <string.h>

int count = 0;

void swap(char *a, char *b)
{
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int alreadyUsed(char str[], int start, int current)
{
    int i;

    for (i = start; i < current; i++)
    {
        if (str[i] == str[current])
            return 1;
    }

    return 0;
}

void permute(char str[], int start, int length)
{
    int i;

    if (start == length)
    {
        printf("%s\n", str);
        count++;
        return;
    }

    for (i = start; i < length; i++)
    {
        if (alreadyUsed(str, start, i))
            continue;

        swap(&str[start], &str[i]);

        permute(str, start + 1, length);

        swap(&str[start], &str[i]);
    }
}

int main()
{
    char str[9];

    printf("Enter string: ");
    scanf("%8s", str);

    permute(str, 0, strlen(str));

    printf("Total = %d", count);

    return 0;
}
