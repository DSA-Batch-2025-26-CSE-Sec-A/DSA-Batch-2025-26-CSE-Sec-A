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
    char prefix[MAX];
    char op1[MAX], op2[MAX], result[MAX];

    printf("Enter prefix expression: ");
    scanf("%s", prefix);

    for (int i = strlen(prefix) - 1; i >= 0; i--)
    {
        char ch = prefix[i];

        if (isalnum(ch))
        {
            char temp[2] = {ch, '\0'};
            push(temp);
        }
    
        else
        {
            strcpy(op1, pop());
            strcpy(op2, pop());

            sprintf(result, "%s%s%c", op1, op2, ch);

            push(result);
        }
    }

    printf("Postfix expression: %s\n", stack[top]);

    return 0;
}
