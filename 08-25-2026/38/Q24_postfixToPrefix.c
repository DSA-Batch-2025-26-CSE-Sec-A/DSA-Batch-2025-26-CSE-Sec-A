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

void postfixToPrefix(char postfix[], char prefix[])
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
            sprintf(temp, "%c%s%s",
                    postfix[i], operand1, operand2);
            push(temp);
        }
    }
    pop(prefix);
}

int main()
{
    char postfix[MAX];
    char prefix[MAX];
    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    postfixToPrefix(postfix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}
