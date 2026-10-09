#include <bits/stdc++.h>
using namespace std;

int main () 
{
    int x;
    cin >> x;
    if (x/1000) {
        if (x/1000 && (x/1000)%2==0) {
            cout << "EVEN";
        }
        else{
            cout << "ODD";
        }
    }
    else if ((x/100)%2==0){
            cout << "EVEN";
    }
    else {
        cout << "ODD";
    }
    return 0;
}
