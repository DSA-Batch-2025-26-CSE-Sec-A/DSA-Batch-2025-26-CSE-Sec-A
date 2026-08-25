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

// Convert Postfix to Prefix
string postfixToPrefix(string postfix)
{
    stack<string> st;

    // Scan postfix from LEFT to RIGHT
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
            // First popped = right operand
            string operand2 = st.top();
            st.pop();

            // Second popped = left operand
            string operand1 = st.top();
            st.pop();

            // Create prefix expression
            string temp = string(1, c) + operand1 + operand2;

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

    string prefix = postfixToPrefix(postfix);

    cout << "Prefix expression: " << prefix << endl;

    return 0;
}
