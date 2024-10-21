#include <bits/stdc++.h>
using namespace std;

void findRes(vector<string>& res, vector<string>& arr) {
    vector<int> freq(26, INT_MAX);  // Initialize freq array to INT_MAX
    
    // Fill freq array with counts from the first word
    for (char ch : arr[0]) {
        freq[ch - 'a']++;
    }

    // Update freq array with the minimum frequency from other words
    for (int i = 1; i < arr.size(); i++) {
        vector<int> cFreq(26, 0);  // Temp array to store frequency for each word
        for (char ch : arr[i]) {
            cFreq[ch - 'a']++;
        }
        // Take the minimum frequency of each character
        for (int j = 0; j < 26; j++) {
            freq[j] = min(freq[j], cFreq[j]);
        }
    }
    
    // Construct result based on the minimum frequencies
    for (int i = 0; i < 26; i++) {
        while (freq[i]-- > 0) {
            res.push_back(string(1, i + 'a'));
        }
    }
}

int main() {
    int n; 
    cin >> n;
    vector<string> arr(n);

    // Input the array of strings
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    vector<string> res;
    findRes(res, arr);

    // Output the result
    for (const auto& it : res) {
        cout << it << endl;
    }
    return 0;
}
