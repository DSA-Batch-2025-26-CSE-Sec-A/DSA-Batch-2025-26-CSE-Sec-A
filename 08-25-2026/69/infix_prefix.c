#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return stack[top--];
}

int precedence(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/' || c == '%')
        return 2;
    if (c == '+' || c == '-')
        return 1;

    return 0;
}

void reverse(char str[])
{
    int i, j;
    char temp;

    for (i = 0, j = strlen(str) - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void infixToPrefix(char infix[])
{
    char prefix[MAX];
    int i, j = 0;
    char c;

    reverse(infix);

    // Swap brackets
    for (i = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    top = -1;

    for (i = 0; infix[i] != '\0'; i++)
    {
        c = infix[i];

        if (isalnum(c))
        {
            prefix[j++] = c;
        }
        else if (c == '(')
        {
            push(c);
        }
        else if (c == ')')
        {
            while (top != -1 && stack[top] != '(')
                prefix[j++] = pop();

            pop();
        }
        else
        {
            while (top != -1 &&
                   precedence(stack[top]) > precedence(c))
            {
                prefix[j++] = pop();
            }

            push(c);
        }
    }

    while (top != -1)
        prefix[j++] = pop();

    prefix[j] = '\0';

    reverse(prefix);

    printf("Prefix = %s\n", prefix);
}

int main()
{
    char infix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPrefix(infix);

    return 0;
}
