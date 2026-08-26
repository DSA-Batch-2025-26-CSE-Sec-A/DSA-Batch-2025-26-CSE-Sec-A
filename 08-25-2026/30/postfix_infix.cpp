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

int isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' ||
            c == '/' || c == '^');
}

void postfixToInfix(char postfix[], char infix[])
{
    int i;
    char operand1[MAX], operand2[MAX], temp[MAX];

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isalnum(postfix[i]))
        {
            char operand[2];

            operand[0] = postfix[i];
            operand[1] = '\0';

            push(operand);
        }

        else if (isOperator(postfix[i]))
        {
            pop(operand2);

            pop(operand1);

            sprintf(temp, "(%s%c%s)",
                    operand1, postfix[i], operand2);

            push(temp);
        }
    }

    pop(infix);
}

int main()
{
    char postfix[MAX];
    char infix[MAX];

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    postfixToInfix(postfix, infix);

    printf("Infix expression: %s\n", infix);

    return 0;
}
