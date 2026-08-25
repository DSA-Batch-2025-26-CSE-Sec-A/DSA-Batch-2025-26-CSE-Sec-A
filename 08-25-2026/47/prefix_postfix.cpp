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

// Convert Prefix to Postfix
string prefixToPostfix(string prefix)
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

            // Create postfix expression
            string temp = operand1 + operand2 + prefix[i];

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

    string postfix = prefixToPostfix(prefix);

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}
