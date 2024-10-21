#include<bits/stdc++.h>
using namespace std;

void getSubsets(vector<int> arr, vector<int>& helper, vector<vector<int>>& result, int i,int k) {
    if(i >= arr.size()) {
        if(k == 0) {
        result.push_back(helper); }
        return;
    }

    // Include the current element
  
    if(arr[i] <= k) {
    helper.push_back(arr[i]);
    getSubsets(arr, helper, result, i , k - arr[i]);
    helper.pop_back();
    }
    getSubsets(arr, helper, result, i + 1, k );
}

int main() {
    int n,k;

    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i<n;i++) {
        cin >> arr[i];
    }
    vector<int> helper;
    vector<vector<int>> result;
    getSubsets(arr, helper, result, 0,k);
    set<vector<int>>st;
    // Printing all subsets
    for(auto s : result)
            // cout << result[i][j] << " ";
            st.insert(s);
      
       if (st.empty()) {
        cout << "No subsets found that sum to " << k << "." << endl;
    } else {
        cout << "Unique subsets that sum to " << k << ":" << endl;
        for (const auto& subset : st) {
            for (int num : subset) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
