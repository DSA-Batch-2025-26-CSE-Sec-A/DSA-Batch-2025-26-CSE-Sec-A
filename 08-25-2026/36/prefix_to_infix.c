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

void pop(char str[])
{
    strcpy(str, stack[top--]);
}

void prefixToInfix(char prefix[], char infix[])
{
    int i;
    char op;
    char operand1[MAX], operand2[MAX], temp[MAX];

    for (i = strlen(prefix) - 1; i >= 0; i--)
    {
        if (isalnum(prefix[i]))
        {
            temp[0] = prefix[i];
            temp[1] = '\0';

            push(temp);
        }
        else
        {
            op = prefix[i];

            pop(operand1);
            pop(operand2);

            sprintf(temp, "(%s%c%s)", operand1, op, operand2);

            push(temp);
        }
    }

    pop(infix);
}

int main()
{
    char prefix[MAX];
    char infix[MAX];

    printf("Enter prefix expression: ");
    scanf("%s", prefix);

    prefixToInfix(prefix, infix);

    printf("Infix expression: %s\n", infix);

    return 0;
}