#include <bits/stdc++.h>
using namespace std;

int fillWater(string &s)
{
    int n = s.size();
    int c = 0;
    int res = 0;
    bool isThree = false;

    for(int i = 0; i<n;i++) {
        if(s[i] == '.') {
            c++;
            res++;
        }
        else c = 0;

        if(c == 3) {
            isThree = true;
            break;
        }
    }
    if(isThree) return 2;
    else return res;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int res = fillWater(s);
        cout << res << "\n";
    }

    return 0;
}