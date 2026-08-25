#include <iostream>
#include <cstring>
#include <algorithm>
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

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    return 0;
}

string infixToPrefix(string infix)
{
    reverse(infix.begin(), infix.end());

    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';

        else if (infix[i] == ')')
            infix[i] = '(';
    }

    top = -1;

    string postfix = "";

    for (int i = 0; i < infix.length(); i++)
    {
        char ch = infix[i];

        if (isalnum(ch))
        {
            postfix += ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (top != -1 && peek() != '(')
            {
                postfix += pop();
            }

            pop();
        }
        else
        {
            while (top != -1 &&
                   precedence(peek()) > precedence(ch))
            {
                postfix += pop();
            }

            push(ch);
        }
    }

    while (top != -1)
    {
        postfix += pop();
    }

    reverse(postfix.begin(), postfix.end());

    return postfix;
}

int main()
{
    string infix;

    cout << "Enter infix expression: ";
    cin >> infix;

    cout << "Prefix: " << infixToPrefix(infix);

    return 0;
}