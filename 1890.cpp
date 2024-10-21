#include <bits/stdc++.h>
using namespace std;

int solve()
{
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        unordered_map<int, int> mpp;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mpp[x]++;
        }
        
        if (mpp.size() == 1)
        {
            cout << "YES" << "\n";
        }
        else if (mpp.size() > 2)
        {
            cout << "NO" << "\n";
        }
        else
        {
            for (auto it : mpp)
            {   
                vec.push_back(it.second);
            }
            if (abs(vec[0] - vec[1]) <= 1)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }
    return 0;
}