#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b,c;
    char s,equal;
    cin >> a >> s >> b >> equal >> c;

    long long result;
    if (s == '+') result = a+b;
    else if (s == '-') result = a-b;
    else result = a*b;
    if (result == c) cout << "Yes";
    else cout << result;
    return 0;
}
