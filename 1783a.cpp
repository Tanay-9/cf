#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int maxi = INT_MIN;
    int mini = INT_MAX;
   
    sort(vec.begin(),vec.end());
    maxi = vec[n-1];
    mini = vec[0];

    if(maxi == mini) cout << "NO";
    else {
        cout << "YES" << endl;
        swap(vec[0],vec[n-1]);
        swap(vec[1],vec[n-1]);

        for(auto i : vec) {
            cout << i << " ";
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
