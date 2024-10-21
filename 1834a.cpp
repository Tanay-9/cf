#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int mov = 0;
    int sum = 0;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;
        sum += x;
        if (x < 0)
            neg++;
    }

    if (sum < 0)
    {
        int nSum = sum * -1;

        if (nSum % 2 == 0)
        {
            mov = nSum / 2;
        }
        else
            mov = (nSum / 2) + 1;
    }

    
    if ((neg - mov) > 0 && !(((neg - mov) % 2) == 0))
        mov += 1;

    cout << mov << endl;
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
