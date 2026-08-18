#include <stdio.h>
#include <string.h>

int total = 0;

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

void permutations(char str[], int index, int length)
{
    if (index == length)
    {
        printf("%s\n", str);
        total++;
        return;
    }

    for (int i = index; i < length; i++)
    {
        if (alreadyUsed(str, index, i, str[i]))
            continue;

        swap(&str[index], &str[i]);

        permutations(str, index + 1, length);

        swap(&str[index], &str[i]);
    }
}

int main()
{
    char str[9];

    scanf("%8s", str);

    permutations(str, 0, strlen(str));

    printf("Total = %d", total);

    return 0;
}
