#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;

    int maxN = x;
    int minN = x;
    int maxI = 0;
    int minI = 0;

    for(int i = 1; i<n;i++) {
        int y;
        cin >> y;

        if(y > maxN) {
            maxN = y;
            minI = i;
        }
        if(y <= maxN) {
            minN = y;
            minI = i;
        }
    }
          
    return 0;
}