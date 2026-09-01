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
    char prefix[N];
    char a[N], b[N], temp[N];
    int i;

    printf("Enter prefix expression: ");
    scanf("%s", prefix);

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
            pop(a);
            pop(b);

            sprintf(temp, "(%s%c%s)", a, prefix[i], b);

            push(temp);
        }
    }

    pop(temp);

    printf("Infix expression: %s\n", temp);

    return 0;
}
