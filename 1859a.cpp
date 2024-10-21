#include<bits/stdc++.h>
using namespace std;

pair<vector<int>,vector<int>> solve(vector<int>&arr) {
    int maxi = INT_MIN;

    for(int i : arr) {
        maxi = max(maxi,i);
    }

    vector<int>bArr;
    vector<int>cArr;

    for(int i : arr) {
        if(i == maxi) {
            cArr.push_back(i);
        } 
        else {
            bArr.push_back(i);
        }
    }

    if(cArr.empty() || bArr.empty()) 
    return {{},{}};

    return {bArr,cArr};

}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int>arr(n);
        for(int i=0 ;i<n;i++) {
            cin >> arr[i];
        }

        auto it = solve(arr);
        if(it.first.empty() || it.second.empty()) cout << -1 <<"\n";
        else {
            vector<int> b = it.first;
            vector<int> c = it.second;

            cout << b.size() << " " << c.size() << "\n"; 

            for(int i = 0; i<b.size();i++) {
                cout << b[i] << " ";
            }
            cout << "\n";

            
            for(int i = 0; i<c.size();i++) {
                cout << c[i] << " ";
            }
            cout << "\n";
        }
    }   
    return 0;

}