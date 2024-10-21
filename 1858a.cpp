#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;

    cin >> t;
    while(t--) {
        long long sum = 0;
      int x,y,z;
      cin >> x>> y >> z;
      if(x + (z % 2) > y) cout << "First" << endl;
      else cout << "Second" << endl;
    }
    return 0;
}