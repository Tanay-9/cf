#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n+1);
    int mainCount = 0;
    for(int i  = 1; i<=n;i++)
        {
            cin >> arr[i];
            if(arr[i] == 2) mainCount++;
        }

        int currCount = 0;
        int k = 0;
        for(int i = 1; i<=n;i++){
            if(arr[i] == 2) {
                currCount++;
                mainCount--;
            }

            if(currCount == mainCount) {
                cout << i;
                k = 1;
                break;
            }
        }
        if(!k) cout << -1;
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