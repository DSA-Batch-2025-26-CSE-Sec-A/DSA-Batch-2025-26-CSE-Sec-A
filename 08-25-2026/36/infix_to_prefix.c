#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    stack[++top] = ch;
}

char pop()
{
    return stack[top--];
}

char peek()
{
    return stack[top];
}

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
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
    char reversed[MAX];
    int i, j = 0;
    char ch;

    strcpy(reversed, infix);

    reverse(reversed);

    for (i = 0; reversed[i] != '\0'; i++)
    {
        if (reversed[i] == '(')
            reversed[i] = ')';
        else if (reversed[i] == ')')
            reversed[i] = '(';
    }

    top = -1;

    for (i = 0; reversed[i] != '\0'; i++)
    {
        ch = reversed[i];

        if (isalnum(ch))
        {
            prefix[j++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (top != -1 && peek() != '(')
                prefix[j++] = pop();

            if (top != -1)
                pop();
        }
        else
        {
            while (top != -1 &&
                   peek() != '(' &&
                   precedence(peek()) > precedence(ch))
            {
                prefix[j++] = pop();
            }

            push(ch);
        }
    }

    while (top != -1)
        prefix[j++] = pop();

    prefix[j] = '\0';

    reverse(prefix);
}

int main()
{
    char infix[MAX];
    char prefix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}