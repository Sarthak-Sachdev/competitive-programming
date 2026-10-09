#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    long long left = max(l1, l2);
    long long right = min(r1, r2);
    if (left <= right) cout << left << ' ' << right;
    else cout << -1;
}
