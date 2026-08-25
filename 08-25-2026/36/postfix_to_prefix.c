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

void postfixToPrefix(char postfix[], char prefix[])
{
    int i;
    char operand1[MAX], operand2[MAX], temp[MAX];

    for (i = 0; postfix[i] != '\0'; i++)
    {
        if (isalnum(postfix[i]))
        {
            temp[0] = postfix[i];
            temp[1] = '\0';

            push(temp);
        }
        else
        {
            pop(operand2);
            pop(operand1);

            sprintf(temp, "%c%s%s", postfix[i], operand1, operand2);

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