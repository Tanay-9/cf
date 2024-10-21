#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,f = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            f = 1;
        }
    }
     cout << (f == 1 ? "HARD" : "EASY");
    return 0;
}