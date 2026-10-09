#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long answer = ((a%100)*(b%100)*(c%100)*(d%100))%100;
    cout << answer;
    return 0;
}
