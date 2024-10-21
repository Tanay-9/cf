#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int td = k * l;
    int ed = td/nl;
    int ts = p/np;
    int tsli = c * d;

     int maxToast = min({ed, tsli, ts});
    cout << maxToast/n << endl;
   
    return 0;
}