#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sorted[3] = {a, b, c};
    sort(sorted, sorted + 3);

    for (int value : sorted) cout << value << '\n';
    cout << '\n' << a << '\n' << b << '\n' << c << '\n';
}
