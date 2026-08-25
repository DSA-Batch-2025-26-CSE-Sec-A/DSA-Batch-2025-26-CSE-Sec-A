#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX][MAX];
int top = -1;

void push(char str[])
{
    strcpy(stack[++top], str);
}

char* pop()
{
    return stack[top--];
}

int main()
{
    char prefix[MAX];
    char op1[MAX], op2[MAX], result[MAX];
    int i;
    char c;

    printf("Enter prefix expression: ");
    scanf("%s", prefix);

    for (i = strlen(prefix) - 1; i >= 0; i--)
    {
        c = prefix[i];

        if (isalnum(c))
        {
            char temp[2] = {c, '\0'};
            push(temp);
        }
        else
        {
            strcpy(op1, pop());
            strcpy(op2, pop());

            sprintf(result, "(%s%c%s)", op1, c, op2);

            push(result);
        }
    }

    printf("Infix = %s\n", stack[top]);

    return 0;
}
