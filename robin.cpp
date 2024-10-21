/*
Robin encounters n
 people starting from the 1
-st and ending with the n
-th. The i
-th person has ai
 gold. If ai≥k
, Robin will take all ai
 gold, and if ai=0
, Robin will give 1
 gold if he has any. Robin starts with 0
 gold.

Find out how many people Robin gives gold to.

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
, k
 (1≤n≤50,1≤k≤100
) — the number of people and the threshold at which Robin Hood takes the gold.

The second line of each test case contains n
 integers a1,a2,…,an
 (0≤ai≤100
) — the gold of each person.

Output
For each test case, output a single integer, the number of people that will get gold from Robin Hood.
*/

#include <bits/stdc++.h>
using namespace std;

int solve (vector<int>arr, int k) {
    int curr = 0, give = 0;

    for(int i = 0; i<arr.size();i++) {
        if(arr[i] == 0 && curr >= 1) {
            curr-=1;
            give+=1;
        }
        else if(arr[i] >= k) {
            curr+=arr[i];
        }
        else continue;
    }
    return give;
}
int main()

{   
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0; i<n; i++) {
                cin >> arr[i];
        }

        int give = solve(arr,k);
        cout << give << endl;
    }
    return 0;
}