#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>
using namespace std;
using boost::multiprecision::cpp_dec_float_100;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // Compare logarithms so the powers themselves never need to be constructed.
    cpp_dec_float_100 left = cpp_dec_float_100(b) * log(cpp_dec_float_100(a));
    cpp_dec_float_100 right = cpp_dec_float_100(d) * log(cpp_dec_float_100(c));
    cout << (left > right ? "YES" : "NO");
}
