#include <bits/stdc++.h>
using namespace std;

int main () 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string f,s,f1,s1;
    cin >> f >> s;
    cin >> f1 >> s1;
    if (s == s1){
        cout << "ARE Brothers";
    }
    else {
        cout << "NOT";
    }
    return 0;
}