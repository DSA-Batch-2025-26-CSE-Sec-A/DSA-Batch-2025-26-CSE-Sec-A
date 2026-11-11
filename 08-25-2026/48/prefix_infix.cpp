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

// Convert Prefix to Infix
string prefixToInfix(string prefix)
{
    stack<string> st;

    // Scan prefix from RIGHT to LEFT
    for (int i = prefix.length() - 1; i >= 0; i--)
    {
        // If operand, push it
        if (isalnum(prefix[i]))
        {
            st.push(string(1, prefix[i]));
        }

        // If operator
        else if (isOperator(prefix[i]))
        {
            // First popped = left operand
            string operand1 = st.top();
            st.pop();

            // Second popped = right operand
            string operand2 = st.top();
            st.pop();

            // Create infix expression
            string temp = "(" + operand1 + prefix[i] + operand2 + ")";

            // Push result back
            st.push(temp);
        }
    }

    // Final result
    return st.top();
}

int main()
{
    string prefix;

    cout << "Enter prefix expression: ";
    cin >> prefix;

    string infix = prefixToInfix(prefix);

    cout << "Infix expression: " << infix << endl;

    return 0;
}
