#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr,int x) {
       
        int n = arr.size();
        int res = arr[0];
        for(int i = 1; i<arr.size()-1;i++) {
            res = max(res,arr[i] - arr[i-1]);

        }

        int last = arr[n-1] - arr[n-2];
        res = max(res,2*last);
        // cout << res;
        return res;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int>arr(n);

       
        for(int i= 0; i<n;i++) {
            cin >> arr[i];
        }
        arr.push_back(x);
       int res =  solve(arr,x);
       
       cout << res << "\n";
 
    }
    return 0;
}