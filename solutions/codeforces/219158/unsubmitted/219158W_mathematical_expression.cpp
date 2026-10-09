#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    char op, equals;
    cin >> a >> op >> b >> equals >> c;

    long long result = op == '+' ? a + b : op == '-' ? a - b : a * b;
    if (result == c) cout << "Yes";
    else cout << result;
}
