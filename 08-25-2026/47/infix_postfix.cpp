#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
    stack[++top] = c;

char pop()
    return stack[top--];

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
string infixToPostfix(string infix)
{
    string postfix = "";
    for (char c : infix)
    {
        if (isalnum(c))
            postfix += c;
          
        else if (c == '(')
            push(c);
          
        else if (c == ')')
        {
            while (peek() != '(')
                postfix += pop();
            pop();
        }
        else
        {
            while (top != -1 &&peek() != '(' &&precedence(peek()) >= precedence(c))
                postfix += pop();
            push(c);
        }
    }
    while (top != -1)
        postfix += pop();

    return postfix;
}

int main()
{
    string infix;

    cout << "Enter infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
