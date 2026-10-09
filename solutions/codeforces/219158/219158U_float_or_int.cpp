#include <bits/stdc++.h>
using namespace std;

int main () 
{
    double n,dec;
    cin >> n;
    dec = n - (int)n;
    if (dec) {
        cout << "float " << (int)n << " " << dec;
    }
    else {
        cout << "int " << (int)n;
    }
    return 0;
}