#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>&vec,int n) {
    vector<int>res;
    res.push_back(vec[0]);
    
    for(int i = 1; i < n;i++) {
        if(vec[i-1] <= vec[i] )
            {   
                res.push_back(vec[i]);
            }
        else {
            res.push_back(vec[i]-1 == 0? vec[i] : vec[i]-1);
            res.push_back(vec[i]);
        }
    }
    cout << res.size() << "\n";
    for(int i = 0; i<res.size();i++) {

        cout << res[i] << " ";
    }
}


int main() {
   int t;
   cin >> t;
   while(t--) {
    int n;
    cin >> n;
    vector<int>vec(n);
    
    for(int i=0; i<n;i++) {
        cin >> vec[i]; 
       
    }

    solve(vec,n);
    cout << "\n";
   }

    return 0;
}