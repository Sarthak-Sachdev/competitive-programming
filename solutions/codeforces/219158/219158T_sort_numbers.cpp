#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mn = a, mx = a;

    if (b < mn) mn = b;
    if (c < mn) mn = c;

    if (b > mx) mx = b;
    if (c > mx) mx = c;

    int mid = a + b + c - mn - mx;

    cout << mn << endl << mid << endl << mx << endl;
    cout << endl;
    cout << a << endl << b << endl << c;

    return 0;
}