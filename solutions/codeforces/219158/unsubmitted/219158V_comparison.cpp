#include <iostream>
using namespace std;

int main() {
    int a, b;
    char sign;
    cin >> a >> sign >> b;

    bool correct = sign == '<' ? a < b : sign == '>' ? a > b : a == b;
    cout << (correct ? "Right" : "Wrong");
}
