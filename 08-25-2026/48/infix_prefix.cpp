#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    return stack[top--];
}

char peek()
{
    if (top == -1)
        return '\0';

    return stack[top];
}

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return 0;
}

void reverseString(string &str)
{
    reverse(str.begin(), str.end());
}

string infixToPrefix(string infix)
{
    string prefix = "";

    // Reverse infix
    reverseString(infix);

    // Swap brackets
    for (int i = 0; i < infix.length(); i++)
    {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    // Reset stack
    top = -1;

    // Convert reversed expression to postfix
    for (char c : infix)
    {
        // Operand
        if (isalnum(c))
        {
            prefix += c;
        }

        // Opening bracket
        else if (c == '(')
        {
            push(c);
        }

        // Closing bracket
        else if (c == ')')
        {
            while (peek() != '(')
                prefix += pop();

            pop(); // Remove '('
        }

        // Operator
        else
        {
            while (top != -1 &&
                   peek() != '(' &&
                   precedence(peek()) > precedence(c))
            {
                prefix += pop();
            }

            push(c);
        }
    }

    // Pop remaining operators
    while (top != -1)
    {
        prefix += pop();
    }

    // Reverse to get prefix
    reverseString(prefix);

    return prefix;
}

int main()
{
    string infix;

    cout << "Enter infix expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);

    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
