#include<bits/stdc++.h>
using namespace std;

int main() {
    int m,n;
    cin >> m >> n;

    // vector<int>arr(n);
    // for(int i = 0; i<n;i++) {
    //     cin >> arr[i];
    // }

    // for(int i = 1; i<n-1;i++) {
    //     if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) 
    //     {
    //         cout << arr[i];
    //         break;
    //     }
    // }
    int sum = 0;
    for(int i = m; i<=n; i++) {
        if(i % 3 == 0 && i % 5 == 0) sum+=i;
    }

    cout << sum;
    return 0;   
}