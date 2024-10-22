#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n,k,x;
    cin >> n >> k >> x;
          
        if (x != 1) {
          
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; ++i) {
                cout << 1 << " ";
            }
           
        } else {
           
            if (k == 1) {
               
                cout << "NO" << endl;
            } else if (n % 2 == 0) {
               
                cout << "YES" << endl;
                cout << n / 2 << endl;  
                for (int i = 0; i < n / 2; ++i) {
                    cout << 2 << " ";
                }
               
            } else if (n >= 3 && k >= 3) {
                
                cout << "YES" << endl;
                cout << (n - 3) / 2 + 1 << endl;  
                cout << 3 << " ";
                for (int i = 0; i < (n - 3) / 2; ++i) {
                    cout << 2 << " ";
                }
             
            } else {
              
                cout << "NO";
            }
        }
    }




int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
        cout << endl;
    }
    return 0;
}