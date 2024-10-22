#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;

    if(n < 10) {
        cout << n;
        return;
    }

    int c = 0;
    int last = 0;
    while(n!=0) {
        int d = n %10;
        c++;
        last = d;
        n/=10;
    }

    int res = 9 * (c-1) + last;
    cout << res; 

}

int main()
{
    int t;
    cin >> t;
    while(t--) 
    {
        solve();
        cout << endl;

    }
    return 0;
}