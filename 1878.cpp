#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n, s;
        cin >> n >> s;
        
        bool found = false; 
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x == s) {
                found = true;
            }
        }

        if(found) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
