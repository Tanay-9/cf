#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long  n; 
    cin >>n;

    if(n % 2 == 0) cout << -1;
    else {
        for(long long i = 1; i<=n/2; i++) cout << i << " ";
        for(long long i = n; i>n/2;i--) cout << i << " ";
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