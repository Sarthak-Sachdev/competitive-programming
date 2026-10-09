#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int a,b;
    char op;
    cin >> a >> op >> b;
    if (op == '+'){
        cout << (a + b);
    }
    else if (op == '-'){
        cout << (a - b);
    }
    else if (op == '*'){
        cout << (a * b);
    }
    else if(op == '/'){
        cout << (int)a/b;
    }
    return 0;
}