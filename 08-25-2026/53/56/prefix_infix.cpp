#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX][MAX];
int top = -1;

// Push string into stack
void push(char str[])
{
    strcpy(stack[++top], str);
}

// Pop string from stack
void pop(char str[])
{
    strcpy(str, stack[top--]);
}

// Check whether character is an operator
int isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' ||
            c == '/' || c == '^');
}

// Convert Prefix to Infix
void prefixToInfix(char prefix[], char infix[])
{
    int i;
    char operand1[MAX], operand2[MAX], temp[MAX];

    // Scan prefix from RIGHT to LEFT
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

        // If operator
        else if (isOperator(prefix[i]))
        {
            // First popped = left operand
            pop(operand1);

            // Second popped = right operand
            pop(operand2);

            // Create infix expression
            sprintf(temp, "(%s%c%s)",
                    operand1, prefix[i], operand2);

            // Push result back
            push(temp);
        }
    }

    // Final result
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