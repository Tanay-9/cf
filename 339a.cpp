#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> vec(4, 0);

    for (auto it : s)
    {
        if (it != '+')
        {
            vec[it - '0']++;
        }
    }
        bool first = true;
      for (int i = 1; i <= 3; i++) {
        while (vec[i] > 0) {
            if (!first) {
                cout << "+";
            }
            cout << i;
            first = false;
            vec[i]--;
        }
    }

    return 0;
}