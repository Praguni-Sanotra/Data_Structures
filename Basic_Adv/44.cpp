// Sort an array with their index element using pair

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int arr[] = {23, 12, 45, 10, 77};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Store elements with their original indices as pairs
    vector<pair<int, int>> v;
    for(int i = 0; i < n; i++) {
        v.push_back({arr[i], i});
    }

    // Sort by array element (first of pair)
    sort(v.begin(), v.end());
    
    cout << "Sorted array with original indices:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "Value: " << v[i].first << ", Original Index: " << v[i].second << endl;
    }

    return 0;
}