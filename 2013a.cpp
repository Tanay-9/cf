#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    long long res;
    cin >> n;

    long long x, y;
    cin >> x >> y;

    if (n == 0)
    {
        cout << 0;
        return;
    }

    long long blend = min(x,y);

    res = n%blend == 0 ? n/blend : n/blend+1;

    cout << res;
} 

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}