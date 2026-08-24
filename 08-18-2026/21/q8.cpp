#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int countPermutations = 0;

void generatePermutations(string& s, int index) {
    if (index == s.length()) {
        cout << s << endl;
        countPermutations++;
        return;
    }
    bool used[26] = {false};

    for (int i = index; i < s.length(); i++) {
        int c = s[i] - 'A';

        if (used[c])
            continue;

        used[c] = true;
        swap(s[index], s[i]);
        generatePermutations(s, index + 1);
        swap(s[index], s[i]);
    }
}

int main() {
    string s;
    cin >> s;

    generatePermutations(s, 0);

    cout << "Total = " << countPermutations << endl;

    return 0;
}
