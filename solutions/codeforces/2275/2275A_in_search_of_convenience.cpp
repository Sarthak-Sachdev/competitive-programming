#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int x, y, r;

    for (int i = 0; i < t; i++) {
        cin >> x >> y >> r;

        x += r;

        cout << x << " " << y << endl;
    }
}