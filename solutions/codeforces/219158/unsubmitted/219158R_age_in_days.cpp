#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n / 365 << " years\n";
    n %= 365;
    cout << n / 30 << " months\n";
    cout << n % 30 << " days\n";
}
