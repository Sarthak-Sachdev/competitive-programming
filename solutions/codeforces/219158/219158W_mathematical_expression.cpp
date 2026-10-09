#include <iostream>
using namespace std;

int main() {
    long long a, b, c, r;
    char s, e;
    cin >> a >> s >> b >> e >> c;

    if (s == '+') r = a + b;
    else if (s == '-') r = a - b;
    else r = a * b;

    if (r == c) cout << "Yes";
    else cout << r;
}