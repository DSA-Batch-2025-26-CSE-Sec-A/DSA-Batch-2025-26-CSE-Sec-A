#include <stdio.h>
#include <string.h>

int count = 0;

void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int alreadyUsed(char str[], int start, int end, char ch)
{
    for (int i = start; i < end; i++)
    {
        if (str[i] == ch)
            return 1;
    }

    return 0;
}

void permute(char str[], int index, int length)
{
    if (index == length)
    {
        printf("%s\n", str);
        count++;
        return;
    }

    for (int i = index; i < length; i++)
    {
        // Skip duplicate characters at this level
        if (alreadyUsed(str, index, i, str[i]))
            continue;

        swap(&str[index], &str[i]);

        permute(str, index + 1, length);

        // Backtracking: undo the swap
        swap(&str[index], &str[i]);
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