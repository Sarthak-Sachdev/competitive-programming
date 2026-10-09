#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int n,y,d,m;
    cin >> n;
    y = (int)n/365;
    m = (n - y*365)/30;
    d = (n - y*365 - m*30);
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
    return 0;
}