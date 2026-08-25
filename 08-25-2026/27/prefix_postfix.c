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

void prefixToPostfix(char prefix[], char postfix[])
{
    int i;
    char operand1[MAX], operand2[MAX], temp[MAX];

    for (i = strlen(prefix) - 1; i >= 0; i--)
    {
        // If operand, push it
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

            sprintf(temp, "%s%s%c",
                    operand1, operand2, prefix[i]);

            push(temp);
        }
    }

    pop(postfix);
}

int main()
{
    char prefix[MAX];
    char postfix[MAX];

    printf("Enter prefix expression: ");
    scanf("%s", prefix);

    prefixToPostfix(prefix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}