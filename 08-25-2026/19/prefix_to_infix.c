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
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void prefixToInfix(char prefix[], char infix[])
{
    int i;
    char operand1[MAX], operand2[MAX], temp[MAX];
    for (i = strlen(prefix) - 1; i >= 0; i--)
    {
        if (isalnum(prefix[i]))
        {
            char operand[2];
            operand[0] = prefix[i];
            operand[1] = '\0';
            push(operand);
        }
        else if (isOperator(prefix[i]))
        {
            pop(operand1);
            pop(operand2);
            sprintf(temp, "(%s%c%s)",
                    operand1, prefix[i], operand2);
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