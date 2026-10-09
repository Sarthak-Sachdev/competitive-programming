#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b * logl(a) > d * logl(c)) cout << "YES";
    else cout << "NO";
}