#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    size_t dot = n.find('.');
    if (dot == string::npos) {
        cout << "int " << n;
        return 0;
    }

    string fraction = n.substr(dot + 1);
    while (!fraction.empty() && fraction.back() == '0') fraction.pop_back();

    if (fraction.empty()) cout << "int " << n.substr(0, dot);
    else cout << "float " << n.substr(0, dot) << " 0." << fraction;
}
