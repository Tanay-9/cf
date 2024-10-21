#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int i = 0, j = n - 1;
    while (i < j && s[i] != s[j]) {
        i++;
        j--;
    }

    cout << j - i + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
