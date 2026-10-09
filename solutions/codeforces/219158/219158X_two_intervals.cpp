#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int L = a, R = b;

    if (c > L)
        L = c;

    if (d < R)
        R = d;

    if (L <= R)
        cout << L << " " << R;
    else
        cout << -1;

    return 0;
}