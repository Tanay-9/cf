#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n; 
    cin >> n;

    int count = 0;
    vector<int>arr(n);
   
    for(int i = 0; i<n;i++) {
        cin >> arr[i];
    }

    for(int i = 0; i<n-1;i++) {
        if(arr[i] % 2 == arr[i+1]%2) {
            count++;
        }
    }

    cout << count;

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