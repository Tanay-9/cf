#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int total = 0;
        for(int i =0; i<n-1;i++) {
            int x;
            cin >> x;

            total+=x;
        }   

        cout << -1*total<<endl;

    }
    return 0;
}