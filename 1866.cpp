#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int dist = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            cout << 0;
            return 0;
        }

        else if (x < 0)
            x = x * -1;
        dist = min(dist, x);
    }
    cout << dist;
    return 0;
}