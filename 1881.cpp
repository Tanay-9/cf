#include<bits/stdc++.h>
using namespace std;

int solve(string x, string s) {
    int c = -1;
    for(int i = 0; i<=5 ; i++) {
       
        auto f = x.find(s);
       
        if(f != string::npos) {
            c = i;
            break;
        }
        x=x+x;
       
    }
    return c == -1 ? -1 : c;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        int n,m;
        cin >> n >> m;
        
        string x,s;
        cin >> x >> s;
        int res = solve(x,s);
        cout << res << "\n";
    }
    return 0;
}