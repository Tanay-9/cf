#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> shapeFaces = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};

    int n;
    cin >> n;
    int res = 0;
    unordered_map<string, int> arr(n);
    for (int i = 0; i < n; i++)
    {
        string help;
        cin >> help;
        res += shapeFaces[help];
    }
    cout << res;

    return 0;
}