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

void prefixToPostfix(char prefix[], char postfix[])
{
    int i;
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
            pop(operand1);
            pop(operand2);

            sprintf(temp, "%s%s%c", operand1, operand2, prefix[i]);

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