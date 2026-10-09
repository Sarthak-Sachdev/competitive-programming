#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_dec_float.hpp>
using namespace std;
using boost::multiprecision::cpp_dec_float_100;

map<long long, long long> primePowers(long long base, long long exponent)
{
    map<long long, long long> factors;
    for (long long p = 2; p * p <= base; ++p) {
        while (base % p == 0) {
            factors[p] += exponent;
            base /= p;
        }
    }
    if (base > 1) factors[base] += exponent;
    return factors;
}

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b,c,d;
    cin >> a >> b >> c >> d;

    // Equal powers must be detected exactly before comparing logarithms.
    if (primePowers(a, b) == primePowers(c, d)) {
        cout << "NO";
        return 0;
    }

    cpp_dec_float_100 left = cpp_dec_float_100(b) * log(cpp_dec_float_100(a));
    cpp_dec_float_100 right = cpp_dec_float_100(d) * log(cpp_dec_float_100(c));
    cout << (left > right ? "YES" : "NO");
    return 0;
}
