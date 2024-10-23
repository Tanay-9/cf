#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n; 
    cin >> n;

    int ln = 0;

    while(n != 0) {
        int d = n % 10;
        if(d == 7 || d == 4) {
            ln += 1;
        }
        n /= 10;
    }
  
   if(ln == 0) {
    cout << "NO" << endl;
   return 0;
   }
    while(ln > 0) {
        int d = ln % 10;
        if(d != 4 && d != 7) {
            cout << "NO" << endl;
            return 0;  
        }
        ln /= 10;
    }
  
    cout << "YES" << endl; 
    return 0;
}
