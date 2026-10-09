#include <bits/stdc++.h>
using namespace std;

int main ()
{
    char c;
    cin >> c;
    int a = (int)c;
    if (a >= 65 && a<97){
        a+=32;
        cout << (char)a;
    }
    else if (a>=97 && a<=122){
        a-=32;
        cout << (char)a;
    }
    return 0;
}