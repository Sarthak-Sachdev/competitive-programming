#include <iostream>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = (a % 100) * (b % 100) * (c % 100) * (d % 100) % 100;

    if (x < 10) cout << 0;
    cout << x;
    return 0;
}