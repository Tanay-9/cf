#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    string f;
    cin >> s >> f;

    unordered_map<char, int> mpp;

    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]] = i + 1;
    }
    int res = 0;
    for (int i = 0; i < f.size() - 1; i++)
    {
        res += abs(mpp[f[i]] - mpp[f[i + 1]]);
    }

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

