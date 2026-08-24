#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(const string& s, int left, int right) {
    while (left < right && !isalpha(s[left]))
        left++;
    while (left < right && !isalpha(s[right]))
        right--;
    if (left >= right)
        return true;
    if (tolower(s[left]) != tolower(s[right]))
        return false;

    return isPalindrome(s, left + 1, right - 1);
}

int main() {
    string s;
    getline(cin, s);

    if (isPalindrome(s, 0, s.length() - 1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

