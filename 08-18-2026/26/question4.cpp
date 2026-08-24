#include <iostream>
using namespace std;

int digitSum(long long n) {
    if (n < 10)
        return n;

    return (n % 10) + digitSum(n / 10);
}

int digitalRoot(long long n) {
    if (n < 10)
        return n;

    return digitalRoot(digitSum(n));
}

int main() {
    long long n;
    cin >> n;

    cout << digitSum(n) << " " << digitalRoot(n) << endl;

    return 0;
}

