#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; 
    cin >> n;

    for(int i = 0; i<n;i++) {
        int x;
        cin >> x;

        int res = n+1-x;
        cout << res << " ";
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

//mis-judged the problem with respect to forming the new permutation