#include<bits/stdc++.h>

using namespace std;


void solve(vector<int>&res,int n) {
    int m = 1;

    while(n>0) {
        int d = n%10;

        if(d != 0) {
            int x = d*m;
            res.push_back(x);
        }
            m*=10;

            n/=10;
    }
}
int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin >> n;

        vector<int>res;
        solve(res,n);

        cout  << res.size() << endl;
        for(auto i : res) {
            cout <<  i << " ";
        }
        cout << endl;
    }
    return 0;
}