#include <iostream>
using namespace std;

int main() {
    long long a, b;
    char op;
    cin >> a >> op >> b;

    if (op == '+') cout << a + b;
    else if (op == '-') cout << a - b;
    else if (op == '*') cout << a * b;
    else if (op == '/') cout << a / b;
}
