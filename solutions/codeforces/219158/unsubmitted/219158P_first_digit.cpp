#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int firstDigit = x / 1000;
    cout << (firstDigit % 2 == 0 ? "EVEN" : "ODD");
}
