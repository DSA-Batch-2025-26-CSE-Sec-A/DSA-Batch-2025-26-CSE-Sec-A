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

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

    for (int i = 0; postfix[i] != '\0'; i++)
    {
        char ch = postfix[i];

        if (isalnum(ch))
        {
            char temp[2] = {ch, '\0'};
            push(temp);
        }
        else
        {
            strcpy(op2, pop());
            strcpy(op1, pop());

            
            sprintf(result, "%c%s%s", ch, op1, op2);

            push(result);
        }
    }

    printf("Prefix expression: %s\n", stack[top]);

    return 0;
}
