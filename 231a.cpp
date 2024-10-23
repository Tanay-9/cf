#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    int c = 0;
    while(n--) {
    int x,y,z;
    cin >> x >> y >> z; 
    
    int s = x+y+z;
    if(s > 1) c++;
    }

    cout << c;
}


int main() {
   
    
        solve();
        cout << endl;

        
    return 0;
}