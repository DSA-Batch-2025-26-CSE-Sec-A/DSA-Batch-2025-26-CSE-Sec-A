#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 100
char stack[N][N];
int top = -1;

void push(char x[])
{
    strcpy(stack[++top], x);
}

void pop(char x[])
{
    strcpy(x, stack[top--]);
}

int main()
{
    char postfix[N];
    char a[N], b[N], temp[N];
    int i;

    printf("Enter postfix expression: ");
    scanf("%s", postfix);

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
            pop(a);
            pop(b);

            sprintf(temp, "(%s%c%s)", b, postfix[i], a);

            push(temp);
        }
    }

    pop(temp);

    printf("Infix expression: %s\n", temp);

    return 0;
}
