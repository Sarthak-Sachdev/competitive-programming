#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char c;
    cin >> c;
    int a = (int)c;
    if (a >= 48 && a<65){
        cout << "IS DIGIT";
    } 
    else if (a >= 65 && a<97){
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL";
    }
    else if(a>=97 && a<=122){
        cout << "ALPHA" << endl;
        cout << "IS SMALL";
    }
    return 0;
}