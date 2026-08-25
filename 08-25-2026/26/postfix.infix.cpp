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

// Convert Postfix to Infix
void postfixToInfix(char postfix[], char infix[])
{
    int i;
    char operand1[MAX], operand2[MAX], temp[MAX];

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
            // First pop = second operand
            pop(operand2);

            // Second pop = first operand
            pop(operand1);

            // Create infix expression
            sprintf(temp, "(%s%c%s)",
                    operand1, postfix[i], operand2);

            // Push result back
            push(temp);
        }
    }

    // Final result
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
