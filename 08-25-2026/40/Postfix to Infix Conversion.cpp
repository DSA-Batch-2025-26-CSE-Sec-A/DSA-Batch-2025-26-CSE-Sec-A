#include <iostream>
#include <string>
#include <cctype>
using namespace std;

#define SIZE 100

string s[SIZE];
int top = -1;

void push(string str)
{
    s[++top] = str;
}

string pop()
{
    return s[top--];
}

int main()
{
    string postfix;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    for (int i = 0; i < postfix.length(); i++)
    {
        char ch = postfix[i];

        if (isalnum(ch))
        {
            string temp(1, ch);
            push(temp);
        }
        else
        {
            string op2 = pop();
            string op1 = pop();

            string temp = "(" + op1 + ch + op2 + ")";

            push(temp);
        }
    }

    cout << "Infix: " << pop();

    return 0;
}