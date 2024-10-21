#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int maxi = INT_MIN;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
          
            c = 0;
          
        }
        else
            c += 1;
              maxi = max(maxi, c);
    }
    cout << maxi << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}