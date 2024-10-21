#include<bits/stdc++.h>
using namespace std;

int main() { 
    int t; 
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        int move = 0;
        vector<int>moves;
        if(n % k != 0) {
            move = 1;
            moves.push_back(n);
        } 
        else {
            move = 2;
            moves.push_back(n-1);
            moves.push_back(1);
        }
        cout << move << endl;
        for(int i : moves) {
            cout << i << " ";

        }
        cout << "\n";

    }
    return 0;
}