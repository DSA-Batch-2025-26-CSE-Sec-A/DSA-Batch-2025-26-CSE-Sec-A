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

char* pop()
{
    return stack[top--];
}

int main()
{
    char postfix[MAX];
    char op1[MAX], op2[MAX], result[MAX];
    int i;
    char c;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    for (i = 0; postfix[i] != '\0'; i++)
    {
        c = postfix[i];

        if (isalnum(c))
        {
            char temp[2] = {c, '\0'};
            push(temp);
        }
        else
        {
            strcpy(op2, pop());
            strcpy(op1, pop());

            sprintf(result, "(%s%c%s)", op1, c, op2);

            push(result);
        }
    }

    printf("Infix = %s\n", stack[top]);

    return 0;
}
