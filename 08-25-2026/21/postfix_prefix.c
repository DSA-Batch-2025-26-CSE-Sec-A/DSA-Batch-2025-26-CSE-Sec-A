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

// Convert Postfix to Prefix
void postfixToPrefix(char postfix[], char prefix[])
{
    int i;
    char operand1[MAX], operand2[MAX], temp[MAX];

    // Scan postfix from LEFT to RIGHT
    for (i = 0; postfix[i] != '\0'; i++)
    {
        // If operand, push it
        if (isalnum(postfix[i]))
        {
            char operand[2];

            operand[0] = postfix[i];
            operand[1] = '\0';

            push(operand);
        }

        // If operator
        else if (isOperator(postfix[i]))
        {
            // First popped = right operand
            pop(operand2);

            // Second popped = left operand
            pop(operand1);

            // Create prefix expression
            sprintf(temp, "%c%s%s",
                    postfix[i], operand1, operand2);

            // Push result back
            push(temp);
        }
    }

    // Final result
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