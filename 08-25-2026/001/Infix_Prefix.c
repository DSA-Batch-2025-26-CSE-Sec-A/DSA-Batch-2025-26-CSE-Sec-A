#include <stdio.h>
#include <ctype.h>
#include <string.h>

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

char peek()
{
    if (top == -1)
        return '\0';

    return stack[top];
}

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
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

void infixToPrefix(char infix[], char prefix[])
{
    int i, j = 0;
    char c;

    // Reverse infix
    reverse(infix);

    // Swap brackets
    for (i = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';

        else if (infix[i] == ')')
            infix[i] = '(';
    }

    // Convert reversed expression to postfix
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
            while (peek() != '(')
                prefix[j++] = pop();

            pop();
        }
        else
        {
            while (top != -1 &&
                   peek() != '(' &&
                   precedence(peek()) > precedence(c))
            {
                prefix[j++] = pop();
            }

            push(c);
        }
    }

    while (top != -1)
    {
        prefix[j++] = pop();
    }

    prefix[j] = '\0';

    // Reverse to get prefix
    reverse(prefix);
}

int main()
{
    char infix[MAX], prefix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}