#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if(a == 0 && b == 0) {
        cout << "YES";
        return;
    }
    if(a % 2) {
        //1 needs to an even cause odd number of 1s will not allow to be fully cancelled.
        cout << "NO";
    }
    else 
    {
        if(b % 2 == 0) {
            cout << "YES";
        }
        else {
            if(a != 0) cout <<  "YES";
            else cout << "NO";
        }
    }
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}



