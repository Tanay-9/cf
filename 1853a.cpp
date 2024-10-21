#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>arr) {
   bool isSorted = true;
   int n = arr.size();
    int minDiff = INT_MAX;
    for(int i = 0; i<n-1;i++) {
        if(arr[i] > arr[i+1]) isSorted = false;
        minDiff = min(minDiff,arr[i+1] - arr[i]);
    }
      
    if(!isSorted) cout << 0;
    else
    cout << (minDiff/2)+1;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int>arr(n);
        for(int i = 0; i<n;i++) {
            cin >> arr[i];
        }
        solve(arr);
        cout << endl;

    }
    return 0;
}
// 436494330
// 244463723