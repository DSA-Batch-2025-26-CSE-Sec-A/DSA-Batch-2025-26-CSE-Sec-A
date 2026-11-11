#include <iostream>
#include <string>
#include <stack>
#include <cctype>

using namespace std;

// Check whether character is an operator
bool isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' ||
            c == '/' || c == '^');
}

// Convert Postfix to Infix
string postfixToInfix(string postfix)
{
    stack<string> st;

    for (char c : postfix)
    {
        // If operand, push it
        if (isalnum(c))
        {
            st.push(string(1, c));
        }

        // If operator
        else if (isOperator(c))
        {
            // First pop = second operand
            string operand2 = st.top();
            st.pop();

            // Second pop = first operand
            string operand1 = st.top();
            st.pop();

            // Create infix expression
            string temp = "(" + operand1 + c + operand2 + ")";

            // Push result back
            st.push(temp);
        }
    }

    // Final result
    return st.top();
}

int main()
{
    string postfix;

    cout << "Enter postfix expression: ";
    cin >> postfix;

    string infix = postfixToInfix(postfix);

    cout << "Infix expression: " << infix << endl;

    return 0;
}
