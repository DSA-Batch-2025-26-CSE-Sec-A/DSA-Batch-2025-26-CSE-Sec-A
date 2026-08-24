#include <iostream>
using namespace std;

long long moves = 0;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 0)
        return;
    towerOfHanoi(n - 1, source, destination, auxiliary);

    cout << "Move disc " << n << " from "
         << source << " to " << destination << endl;

    moves++;
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    cin >> n;

    towerOfHanoi(n, 'A', 'B', 'C');

    cout << "Total moves = " << moves << endl;

    return 0;
}
