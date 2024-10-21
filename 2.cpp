#include<bits/stdc++.h>
using namespace std;


int solve(string s, string t) {
    int position = 0;

    for(int i = 0; i<t.size();i++) {
        if(s[position] == t[i]) {
        position++; }
    }
    return position+1;
}
int main() {
    string s; 
    string t;
    
    cin>>s;
    cin>>t;

    
    int res = solve(s,t);
    cout << res;
    return 0;

}