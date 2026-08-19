#include <stdio.h>
#include <string.h>

int count = 0;


void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int shouldSwap(char str[], int start, int current)
{
    for (int i = start; i < current; i++)
    {
        if (str[i] == str[current])
            return 0;
    }

    return 1;
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
        // Avoid duplicate permutations
        if (shouldSwap(str, start, i))
        {
            swap(&str[start], &str[i]);

            permute(str, start + 1, length);

            // Backtracking
            swap(&str[start], &str[i]);
        }
    }
}

int main()
{
    char str[9];

    printf("Input: ");
    scanf("%8s", str);

    permute(str, 0, strlen(str));

    printf("Count = %d\n", count);

    return 0;
}