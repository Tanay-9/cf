#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int odd = 0, even = 0;
        for(int i = 0; i<n; i++) {
            int x;
            cin >> x;
            
            if(x % 2 == 0) {
                even = even + 1;
            }
            else odd = odd + 1;
        }
            if(even != 0 && odd == 0) cout << "YES";
            else {
                if(odd % 2 == 0) cout << "YES";
                else cout << "NO";
            }
        
       
        cout << "\n";
     }
    return 0;
}