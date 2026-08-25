#include <iostream>
#include <cctype>
using namespace std;

#define SIZE 100

char s[SIZE];
int top = -1;

void push(char ch)
{
    s[++top] = ch;
}

char pop()
{
    return s[top--];
}

char peek()
{
    return s[top];
}

int precedence(char ch)
{
    if (ch == '^')
        return 3;

    if (ch == '*' || ch == '/' || ch == '%')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}

void infixToPostfix(char infix[])
{
    char postfix[SIZE];
    int i, j = 0;

    for (i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        if (isalnum(ch))
        {
            postfix[j++] = ch;
        }

       
        else if (ch == '(')
        {
            push(ch);
        }

       
        else if (ch == ')')
        {
            while (top != -1 && peek() != '(')
            {
                postfix[j++] = pop();
            }

            pop(); // Remove '('
        }

        // Operator
        else
        {
            while (top != -1 &&
                   peek() != '(' &&
                   precedence(peek()) >= precedence(ch))
            {
                postfix[j++] = pop();
            }

            push(ch);
        }
    }

    while (top != -1)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';

    cout << "Postfix: " << postfix << endl;
}

int main()
{
    char infix[SIZE];

    cout << "Enter infix expression: ";
    cin >> infix;

    infixToPostfix(infix);

    return 0;
}
