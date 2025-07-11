// vector intersection in less than n^2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cout << "Enter size of first vector: ";
    cin >> n;
    vector<int> v1(n);
    cout << "Enter elements of first vector: ";
    for(int i = 0; i < n; i++) cin >> v1[i];

    cout << "Enter size of second vector: ";
    cin >> m;
    vector<int> v2(m);
    cout << "Enter elements of second vector: ";
    for(int i = 0; i < m; i++) cin >> v2[i];

    // Sort both vectors
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    // Find intersection using two pointers
    vector<int> intersection;
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(v1[i] < v2[j]) i++;
        else if(v1[i] > v2[j]) j++;
        else {
            intersection.push_back(v1[i]);
            i++;
            j++;
        }
    }

    cout << "Intersection: ";
    for(int x : intersection) cout << x << " ";
    cout << endl;

    return 0;
}
